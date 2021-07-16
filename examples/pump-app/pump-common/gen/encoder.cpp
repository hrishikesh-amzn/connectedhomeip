/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

#include <app/chip-zcl-zpro-codec.h>

#include <support/BufferWriter.h>
#include <support/SafeInt.h>
#include <support/logging/CHIPLogging.h>

#include <app/common/gen/ids/Attributes.h>
#include <app/common/gen/ids/Clusters.h>
#include <app/common/gen/ids/Commands.h>
#include <app/util/basic-types.h>
#include <lib/support/Span.h>

using namespace chip;
using namespace chip::app::Clusters;
using namespace chip::System;
using namespace chip::Encoding::LittleEndian;

#define COMMAND_HEADER(name, clusterId)                                                                                            \
    const char * kName = name;                                                                                                     \
                                                                                                                                   \
    PacketBufferWriter buf(System::PacketBufferHandle::New(kMaxBufferSize));                                                       \
    if (buf.IsNull())                                                                                                              \
    {                                                                                                                              \
        ChipLogError(Zcl, "Could not allocate packet buffer while trying to encode %s command", kName);                            \
        return PacketBufferHandle();                                                                                               \
    }                                                                                                                              \
                                                                                                                                   \
    if (doEncodeApsFrame(buf, clusterId, kSourceEndpoint, destinationEndpoint, 0, 0, 0, 0, false))                                 \
    {

#define COMMAND_FOOTER()                                                                                                           \
    }                                                                                                                              \
    if (!buf.Fit())                                                                                                                \
    {                                                                                                                              \
        ChipLogError(Zcl, "Command %s can't fit in the allocated buffer", kName);                                                  \
    }                                                                                                                              \
    return buf.Finalize();


/*----------------------------------------------------------------------------*\
| Cluster Name                                                        |   ID   |
|---------------------------------------------------------------------+--------|
| Basic                                                               | 0x0028 |
| DiagnosticLogs                                                      | 0x0032 |
| DoSomethingCluster                                                  | 0x0034 |
| EthernetNetworkDiagnostics                                          | 0x0037 |
| FlowMeasurement                                                     | 0x0404 |
| FlowMeasurement                                                     | 0x0404 |
| GeneralCommissioning                                                | 0x0030 |
| GeneralDiagnostics                                                  | 0x0033 |
| LevelControl                                                        | 0x0008 |
| NetworkCommissioning                                                | 0x0031 |
| OnOff                                                               | 0x0006 |
| OperationalCredentials                                              | 0x003E |
| PressureMeasurement                                                 | 0x0403 |
| PressureMeasurement                                                 | 0x0403 |
| PumpConfigurationAndControl                                         | 0x0200 |
| TemperatureMeasurement                                              | 0x0402 |
| TemperatureMeasurement                                              | 0x0402 |
| ThreadNetworkDiagnostics                                            | 0x0035 |
| WiFiNetworkDiagnostics                                              | 0x0036 |
\*----------------------------------------------------------------------------*/

#define EMBER_ZCL_REPORTING_DIRECTION_REPORTED 0x00

// TODO: Find a way to calculate maximum message length for clusters
//       https://github.com/project-chip/connectedhomeip/issues/965
constexpr uint16_t kMaxBufferSize = 1024;

// This is a global command, so the low bits are 0b00.  The command is
// standard, so does not need a manufacturer code, and we're sending client
// to server, so all the remaining bits are 0.
constexpr uint8_t kFrameControlGlobalCommand = 0x00;

// Pick source endpoint as 1 for now
constexpr EndpointId kSourceEndpoint = 1;

/*----------------------------------------------------------------------------*\
| Cluster FlowMeasurement                                             | 0x0404 |
|------------------------------------------------------------------------------|
| Commands:                                                           |        |
|------------------------------------------------------------------------------|
| Attributes:                                                         |        |
| * MeasuredValue                                                     | 0x0000 |
| * MinMeasuredValue                                                  | 0x0001 |
| * MaxMeasuredValue                                                  | 0x0002 |
| * ClusterRevision                                                   | 0xFFFD |
\*----------------------------------------------------------------------------*/

PacketBufferHandle encodeFlowMeasurementClusterDiscoverAttributes(uint8_t seqNum, EndpointId destinationEndpoint)
{
    COMMAND_HEADER("DiscoverFlowMeasurementAttributes", FlowMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::DiscoverAttributes)
       .Put32(0x0000)
       .Put8(0xFF);
    COMMAND_FOOTER();
}

/*
 * Attribute MeasuredValue
 */
PacketBufferHandle encodeFlowMeasurementClusterReadMeasuredValueAttribute(uint8_t seqNum, EndpointId destinationEndpoint)
{
    COMMAND_HEADER("ReadFlowMeasurementMeasuredValue", FlowMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::ReadAttributes)
       .Put32(FlowMeasurement::Attributes::Ids::MeasuredValue);
    COMMAND_FOOTER();
}

PacketBufferHandle encodeFlowMeasurementClusterConfigureMeasuredValueAttribute(uint8_t seqNum, EndpointId destinationEndpoint, uint16_t minInterval, uint16_t maxInterval, int16_t change)
{
    COMMAND_HEADER("ReportFlowMeasurementMeasuredValue", FlowMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::ConfigureReporting)
       .Put8(EMBER_ZCL_REPORTING_DIRECTION_REPORTED)
       .Put32(FlowMeasurement::Attributes::Ids::MeasuredValue)
       .Put8(41)
       .Put16(minInterval)
       .Put16(maxInterval);
    buf.Put16(static_cast<uint16_t>(change));
    COMMAND_FOOTER();
}

/*
 * Attribute MinMeasuredValue
 */
PacketBufferHandle encodeFlowMeasurementClusterReadMinMeasuredValueAttribute(uint8_t seqNum, EndpointId destinationEndpoint)
{
    COMMAND_HEADER("ReadFlowMeasurementMinMeasuredValue", FlowMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::ReadAttributes)
       .Put32(FlowMeasurement::Attributes::Ids::MinMeasuredValue);
    COMMAND_FOOTER();
}

/*
 * Attribute MaxMeasuredValue
 */
PacketBufferHandle encodeFlowMeasurementClusterReadMaxMeasuredValueAttribute(uint8_t seqNum, EndpointId destinationEndpoint)
{
    COMMAND_HEADER("ReadFlowMeasurementMaxMeasuredValue", FlowMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::ReadAttributes)
       .Put32(FlowMeasurement::Attributes::Ids::MaxMeasuredValue);
    COMMAND_FOOTER();
}

/*
 * Attribute ClusterRevision
 */
PacketBufferHandle encodeFlowMeasurementClusterReadClusterRevisionAttribute(uint8_t seqNum, EndpointId destinationEndpoint)
{
    COMMAND_HEADER("ReadFlowMeasurementClusterRevision", FlowMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::ReadAttributes)
       .Put32(Globals::Attributes::Ids::ClusterRevision);
    COMMAND_FOOTER();
}

/*----------------------------------------------------------------------------*\
| Cluster PressureMeasurement                                         | 0x0403 |
|------------------------------------------------------------------------------|
| Commands:                                                           |        |
|------------------------------------------------------------------------------|
| Attributes:                                                         |        |
| * MeasuredValue                                                     | 0x0000 |
| * MinMeasuredValue                                                  | 0x0001 |
| * MaxMeasuredValue                                                  | 0x0002 |
| * ClusterRevision                                                   | 0xFFFD |
\*----------------------------------------------------------------------------*/

PacketBufferHandle encodePressureMeasurementClusterDiscoverAttributes(uint8_t seqNum, EndpointId destinationEndpoint)
{
    COMMAND_HEADER("DiscoverPressureMeasurementAttributes", PressureMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::DiscoverAttributes)
       .Put32(0x0000)
       .Put8(0xFF);
    COMMAND_FOOTER();
}

/*
 * Attribute MeasuredValue
 */
PacketBufferHandle encodePressureMeasurementClusterReadMeasuredValueAttribute(uint8_t seqNum, EndpointId destinationEndpoint)
{
    COMMAND_HEADER("ReadPressureMeasurementMeasuredValue", PressureMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::ReadAttributes)
       .Put32(PressureMeasurement::Attributes::Ids::MeasuredValue);
    COMMAND_FOOTER();
}

PacketBufferHandle encodePressureMeasurementClusterConfigureMeasuredValueAttribute(uint8_t seqNum, EndpointId destinationEndpoint, uint16_t minInterval, uint16_t maxInterval, int16_t change)
{
    COMMAND_HEADER("ReportPressureMeasurementMeasuredValue", PressureMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::ConfigureReporting)
       .Put8(EMBER_ZCL_REPORTING_DIRECTION_REPORTED)
       .Put32(PressureMeasurement::Attributes::Ids::MeasuredValue)
       .Put8(41)
       .Put16(minInterval)
       .Put16(maxInterval);
    buf.Put16(static_cast<uint16_t>(change));
    COMMAND_FOOTER();
}

/*
 * Attribute MinMeasuredValue
 */
PacketBufferHandle encodePressureMeasurementClusterReadMinMeasuredValueAttribute(uint8_t seqNum, EndpointId destinationEndpoint)
{
    COMMAND_HEADER("ReadPressureMeasurementMinMeasuredValue", PressureMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::ReadAttributes)
       .Put32(PressureMeasurement::Attributes::Ids::MinMeasuredValue);
    COMMAND_FOOTER();
}

/*
 * Attribute MaxMeasuredValue
 */
PacketBufferHandle encodePressureMeasurementClusterReadMaxMeasuredValueAttribute(uint8_t seqNum, EndpointId destinationEndpoint)
{
    COMMAND_HEADER("ReadPressureMeasurementMaxMeasuredValue", PressureMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::ReadAttributes)
       .Put32(PressureMeasurement::Attributes::Ids::MaxMeasuredValue);
    COMMAND_FOOTER();
}

/*
 * Attribute ClusterRevision
 */
PacketBufferHandle encodePressureMeasurementClusterReadClusterRevisionAttribute(uint8_t seqNum, EndpointId destinationEndpoint)
{
    COMMAND_HEADER("ReadPressureMeasurementClusterRevision", PressureMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::ReadAttributes)
       .Put32(Globals::Attributes::Ids::ClusterRevision);
    COMMAND_FOOTER();
}

/*----------------------------------------------------------------------------*\
| Cluster TemperatureMeasurement                                      | 0x0402 |
|------------------------------------------------------------------------------|
| Commands:                                                           |        |
|------------------------------------------------------------------------------|
| Attributes:                                                         |        |
| * MeasuredValue                                                     | 0x0000 |
| * MinMeasuredValue                                                  | 0x0001 |
| * MaxMeasuredValue                                                  | 0x0002 |
| * ClusterRevision                                                   | 0xFFFD |
\*----------------------------------------------------------------------------*/

PacketBufferHandle encodeTemperatureMeasurementClusterDiscoverAttributes(uint8_t seqNum, EndpointId destinationEndpoint)
{
    COMMAND_HEADER("DiscoverTemperatureMeasurementAttributes", TemperatureMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::DiscoverAttributes)
       .Put32(0x0000)
       .Put8(0xFF);
    COMMAND_FOOTER();
}

/*
 * Attribute MeasuredValue
 */
PacketBufferHandle encodeTemperatureMeasurementClusterReadMeasuredValueAttribute(uint8_t seqNum, EndpointId destinationEndpoint)
{
    COMMAND_HEADER("ReadTemperatureMeasurementMeasuredValue", TemperatureMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::ReadAttributes)
       .Put32(TemperatureMeasurement::Attributes::Ids::MeasuredValue);
    COMMAND_FOOTER();
}

PacketBufferHandle encodeTemperatureMeasurementClusterConfigureMeasuredValueAttribute(uint8_t seqNum, EndpointId destinationEndpoint, uint16_t minInterval, uint16_t maxInterval, int16_t change)
{
    COMMAND_HEADER("ReportTemperatureMeasurementMeasuredValue", TemperatureMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::ConfigureReporting)
       .Put8(EMBER_ZCL_REPORTING_DIRECTION_REPORTED)
       .Put32(TemperatureMeasurement::Attributes::Ids::MeasuredValue)
       .Put8(41)
       .Put16(minInterval)
       .Put16(maxInterval);
    buf.Put16(static_cast<uint16_t>(change));
    COMMAND_FOOTER();
}

/*
 * Attribute MinMeasuredValue
 */
PacketBufferHandle encodeTemperatureMeasurementClusterReadMinMeasuredValueAttribute(uint8_t seqNum, EndpointId destinationEndpoint)
{
    COMMAND_HEADER("ReadTemperatureMeasurementMinMeasuredValue", TemperatureMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::ReadAttributes)
       .Put32(TemperatureMeasurement::Attributes::Ids::MinMeasuredValue);
    COMMAND_FOOTER();
}

/*
 * Attribute MaxMeasuredValue
 */
PacketBufferHandle encodeTemperatureMeasurementClusterReadMaxMeasuredValueAttribute(uint8_t seqNum, EndpointId destinationEndpoint)
{
    COMMAND_HEADER("ReadTemperatureMeasurementMaxMeasuredValue", TemperatureMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::ReadAttributes)
       .Put32(TemperatureMeasurement::Attributes::Ids::MaxMeasuredValue);
    COMMAND_FOOTER();
}

/*
 * Attribute ClusterRevision
 */
PacketBufferHandle encodeTemperatureMeasurementClusterReadClusterRevisionAttribute(uint8_t seqNum, EndpointId destinationEndpoint)
{
    COMMAND_HEADER("ReadTemperatureMeasurementClusterRevision", TemperatureMeasurement::Id);
    buf.Put8(kFrameControlGlobalCommand)
       .Put8(seqNum)
       .Put32(Globals::Commands::Ids::ReadAttributes)
       .Put32(Globals::Attributes::Ids::ClusterRevision);
    COMMAND_FOOTER();
}

