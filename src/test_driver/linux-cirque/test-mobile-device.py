#!/usr/bin/env python3
"""
Copyright (c) 2021 Project CHIP Authors

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
"""

import logging
import os
import pprint
import time
import sys

from helper.CHIPTestBase import CHIPVirtualHome

logger = logging.getLogger('CHIPInteractionModelTest')
logger.setLevel(logging.INFO)

sh = logging.StreamHandler()
sh.setFormatter(
    logging.Formatter(
        '%(asctime)s [%(name)s] %(levelname)s %(message)s'))
logger.addHandler(sh)

DEVICE_CONFIG = {
    'device0': {
        'type': 'MobileDevice',
        'base_image': 'chip_mobile_device',
        'capability': ['Interactive'],
        'rcp_mode': True,
    },
    'device1': {
        'type': 'CHIPEndDevice',
        'base_image': 'chip_server',
        'capability': ['Thread', 'Interactive'],
        'rcp_mode': True,
    }
}

CHIP_PORT = 11097

CIRQUE_URL = "http://localhost:5000"

TEST_EXTPANID = "fedcba9876543210"


class TestPythonController(CHIPVirtualHome):
    def __init__(self, device_config):
        super().__init__(CIRQUE_URL, device_config)
        self.logger = logger

    def setup(self):
        self.initialize_home()

    def test_routine(self):
        self.run_controller_test()

    def run_controller_test(self):
        ethernet_ip = [device['description']['ipv4_addr'] for device in self.non_ap_devices
                       if device['type'] == 'CHIPEndDevice'][0]
        server_ids = [device['id'] for device in self.non_ap_devices
                      if device['type'] == 'CHIPEndDevice']
        req_ids = [device['id'] for device in self.non_ap_devices
                   if device['type'] == 'MobileDevice']

        self.reset_thread_devices(server_ids)

        req_device_id = req_ids[0]

        command = "gdb -return-child-result -q -ex run -ex bt --args python3 /usr/bin/mobile-device-test.py -t 75 -a {}".format(ethernet_ip)
        ret = self.execute_device_cmd(req_device_id, command)

        self.assertEqual(ret['return_code'], '0',
                         "Test failed: non-zero return code")

        # Check if the device is in thread network.
        self.check_device_thread_state(server_ids[0], expected_role=['leader'], timeout=5)

        # Check if the device is attached to the correct thread network.
        for device_id in server_ids:
            reply = self.execute_device_cmd(device_id, 'ot-ctl extpanid')
            self.assertEqual(reply['output'].split()[0].strip(), TEST_EXTPANID)

        # Check if device can be controlled by controller
        for device_id in server_ids:
            self.logger.info("checking device log for {}".format(
                self.get_device_pretty_id(device_id)))
            self.assertTrue(self.sequenceMatch(self.get_device_log(device_id).decode('utf-8'), ["LightingManager::InitiateAction(ON_ACTION)", "LightingManager::InitiateAction(OFF_ACTION)"]),
                            "Datamodel test failed: cannot find matching string from device {}".format(device_id))

        # Check if the device response proper Basic Cluster values to controller.
        fmt = "CHIP:ZCL:   ClusterId: {cluster}\n" \
              "CHIP:ZCL:   attributeId: {attr}\n" \
              "CHIP:ZCL:   status: EMBER_ZCL_STATUS_SUCCESS (0x00)\n" \
              "CHIP:ZCL:   attributeType: {attr_type}\n" \
              "CHIP:ZCL:   value: {value}"

        for device_id in server_ids:
            # VendorName
            self.assertTrue(self.sequenceMatch(ret['output'],
                                               [fmt.format(cluster='0x0028',
                                                           attr='0x0001',
                                                           attr_type='0x42',
                                                           value='TEST_VENDOR')]),
                            "Vendor Name was not found {}".format(device_id))

            # VendorID
            self.assertTrue(self.sequenceMatch(ret['output'],
                                               [fmt.format(cluster='0x0028',
                                                           attr='0x0002',
                                                           attr_type='0x21',
                                                           value='0x235a')]),
                            "Vendor ID was not found {}".format(device_id))
            # ProductName
            self.assertTrue(self.sequenceMatch(ret['output'],
                                               [fmt.format(cluster='0x0028',
                                                           attr='0x0003',
                                                           attr_type='0x42',
                                                           value='TEST_PRODUCT')]),
                            "Product Name was not found {}".format(device_id))
            # ProductID
            self.assertTrue(self.sequenceMatch(ret['output'],
                                               [fmt.format(cluster='0x0028',
                                                           attr='0x0004',
                                                           attr_type='0x21',
                                                           value='0xfeff')]),
                            "ProductID was not found {}".format(device_id))
            # UserLabel
            self.assertTrue(self.sequenceMatch(ret['output'],
                                               [fmt.format(cluster='0x0028',
                                                           attr='0x0005',
                                                           attr_type='0x42',
                                                           value='')]),
                            "UserLabel was not found {}".format(device_id))
            # Location
            self.assertTrue(self.sequenceMatch(ret['output'],
                                               [fmt.format(cluster='0x0028',
                                                           attr='0x0006',
                                                           attr_type='0x42',
                                                           value='')]),
                            "Location was not found {}".format(device_id))
            # HardwareVersion
            self.assertTrue(self.sequenceMatch(ret['output'],
                                               [fmt.format(cluster='0x0028',
                                                           attr='0x0007',
                                                           attr_type='0x21',
                                                           value='0x0001')]),
                            "HardwareVersion was not found {}".format(device_id))
            # HardwareVersionString
            self.assertTrue(self.sequenceMatch(ret['output'],
                                               [fmt.format(cluster='0x0028',
                                                           attr='0x0008',
                                                           attr_type='0x42',
                                                           value='TEST_VERSION')]),
                            "HardwareVersionString was not found {}".format(device_id))
            # SoftwareVersion
            self.assertTrue(self.sequenceMatch(ret['output'],
                                               [fmt.format(cluster='0x0028',
                                                           attr='0x0009',
                                                           attr_type='0x23',
                                                           value='0x00000001')]),
                            "SoftwareVersion was not found {}".format(device_id))
            # SoftwareVersionString
            self.assertTrue(self.sequenceMatch(ret['output'],
                                               [fmt.format(cluster='0x0028',
                                                           attr='0x000a',
                                                           attr_type='0x42',
                                                           value='prerelease')]),
                            "SoftwareVersionString was not found {}".format(device_id))


if __name__ == "__main__":
    sys.exit(TestPythonController(DEVICE_CONFIG).run_test())
