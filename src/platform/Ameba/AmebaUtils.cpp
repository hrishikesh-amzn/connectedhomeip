/*
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *    All rights reserved.
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

/**
 *    @file
 *          General utility methods for the Ameba platform.
 */
/* this file behaves like a config.h, comes first */
#include <platform/internal/CHIPDeviceLayerInternal.h>
#include <platform/Ameba/AmebaUtils.h>
#include <support/CodeUtils.h>
#include <support/ErrorStr.h>
#include <support/logging/CHIPLogging.h>

using namespace ::chip::DeviceLayer::Internal;
using chip::DeviceLayer::Internal::DeviceNetworkInfo;

CHIP_ERROR AmebaUtils::IsAPEnabled(bool & apEnabled)
{
    // TODO
    return CHIP_ERROR_NOT_IMPLEMENTED;
}

bool AmebaUtils::IsStationProvisioned(void)
{
    // TODO
    return false;
}

CHIP_ERROR AmebaUtils::IsStationConnected(bool & connected)
{
    // TODO
    return CHIP_ERROR_NOT_IMPLEMENTED;
}

CHIP_ERROR AmebaUtils::StartWiFiLayer(void)
{
    // TODO
    return CHIP_ERROR_NOT_IMPLEMENTED;
}

CHIP_ERROR AmebaUtils::EnableStationMode(void)
{
    // TODO
    return CHIP_ERROR_NOT_IMPLEMENTED;
}

CHIP_ERROR AmebaUtils::SetAPMode(bool enabled)
{
    // TODO
    return CHIP_ERROR_NOT_IMPLEMENTED;
}

int AmebaUtils::OrderScanResultsByRSSI(const void * _res1, const void * _res2)
{
    // TODO
    return CHIP_ERROR_NOT_IMPLEMENTED;
}


const char * AmebaUtils::WiFiModeToStr(int wifiMode)
{
    // TODO
    return "(unknown)";
}


struct netif * AmebaUtils::GetStationNetif(void)
{
    // TODO
    return NULL;
}

struct netif * AmebaUtils::GetNetif(const char * ifKey)
{
    // TODO
    return NULL;
}

bool AmebaUtils::IsInterfaceUp(const char * ifKey)
{
    // TODO
    return CHIP_ERROR_NOT_IMPLEMENTED;
}

bool AmebaUtils::HasIPv6LinkLocalAddress(const char * ifKey)
{
    // TODO
    return CHIP_ERROR_NOT_IMPLEMENTED;
}

CHIP_ERROR AmebaUtils::GetWiFiStationProvision(Internal::DeviceNetworkInfo & netInfo, bool includeCredentials)
{
    // TODO
    return CHIP_ERROR_NOT_IMPLEMENTED;
}

CHIP_ERROR AmebaUtils::SetWiFiStationProvision(const Internal::DeviceNetworkInfo & netInfo)
{
    // TODO
    return CHIP_ERROR_NOT_IMPLEMENTED;
}

CHIP_ERROR AmebaUtils::ClearWiFiStationProvision(void)
{
    // TODO
    return CHIP_ERROR_NOT_IMPLEMENTED;
}
