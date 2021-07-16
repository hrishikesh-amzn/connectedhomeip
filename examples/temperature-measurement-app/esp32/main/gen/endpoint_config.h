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

// Prevent multiple inclusion
#pragma once



// Default values for the attributes longer than a pointer,
// in a form of a binary blob
// Separate block is generated for big-endian and little-endian cases.
#if BIGENDIAN_CPU
#define GENERATED_DEFAULTS { \
\
  /* Endpoint: 0, Cluster: Basic (server), big-endian */\
\
  /* 0 - VendorName, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 32 - ProductName, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 64 - UserLabel, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 96 - HardwareVersionString, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 160 - SoftwareVersion, */\
  0x00, 0x00, 0x00, 0x00, \
\
  /* 164 - SoftwareVersionString, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
\
  /* Endpoint: 0, Cluster: General Commissioning (server), big-endian */\
\
  /* 228 - FabricId, */\
  1, 'o', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 236 - Breadcrumb, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
\
  /* Endpoint: 0, Cluster: General Diagnostics (server), big-endian */\
\
  /* 244 - NetworkInterfaces, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
\
  /* Endpoint: 0, Cluster: WiFi Network Diagnostics (server), big-endian */\
\
  /* 498 - bssid, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
\
  /* Endpoint: 0, Cluster: Ethernet Network Diagnostics (server), big-endian */\
\
  /* 504 - PacketRxCount, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 512 - PacketTxCount, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 520 - TxErrCount, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 528 - CollisionCount, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 536 - OverrunCount, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
\
  /* Endpoint: 0, Cluster: Operational Credentials (server), big-endian */\
\
  /* 544 - fabrics list, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
}


#else // !BIGENDIAN_CPU
#define GENERATED_DEFAULTS { \
\
  /* Endpoint: 0, Cluster: Basic (server), little-endian */\
\
  /* 0 - VendorName, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 32 - ProductName, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 64 - UserLabel, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 96 - HardwareVersionString, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 160 - SoftwareVersion, */\
  0x00, 0x00, 0x00, 0x00, \
\
  /* 164 - SoftwareVersionString, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
\
  /* Endpoint: 0, Cluster: General Commissioning (server), little-endian */\
\
  /* 228 - FabricId, */\
  1, 'o', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 236 - Breadcrumb, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
\
  /* Endpoint: 0, Cluster: General Diagnostics (server), little-endian */\
\
  /* 244 - NetworkInterfaces, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
\
  /* Endpoint: 0, Cluster: WiFi Network Diagnostics (server), little-endian */\
\
  /* 498 - bssid, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
\
  /* Endpoint: 0, Cluster: Ethernet Network Diagnostics (server), little-endian */\
\
  /* 504 - PacketRxCount, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 512 - PacketTxCount, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 520 - TxErrCount, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 528 - CollisionCount, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
  /* 536 - OverrunCount, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
\
  /* Endpoint: 0, Cluster: Operational Credentials (server), little-endian */\
\
  /* 544 - fabrics list, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
\
}

#endif // BIGENDIAN_CPU

#define GENERATED_DEFAULTS_COUNT (16)

#define ZAP_TYPE(type) ZCL_ ## type ## _ATTRIBUTE_TYPE
#define ZAP_LONG_DEFAULTS_INDEX(index) {(uint8_t*)(&generatedDefaults[index])}
#define ZAP_MIN_MAX_DEFAULTS_INDEX(index) {(uint8_t*)(&minMaxDefault[index])}
#define ZAP_EMPTY_DEFAULT() {(uint16_t) 0}
#define ZAP_SIMPLE_DEFAULT(x) {(uint16_t) x}

// This is an array of EmberAfAttributeMinMaxValue structures.
#define GENERATED_MIN_MAX_DEFAULT_COUNT 0
#define GENERATED_MIN_MAX_DEFAULTS { \
}


#define ZAP_ATTRIBUTE_MASK(mask) ATTRIBUTE_MASK_ ## mask
// This is an array of EmberAfAttributeMetadata structures.
#define GENERATED_ATTRIBUTE_COUNT 38
#define GENERATED_ATTRIBUTES { \
\
  /* Endpoint: 0, Cluster: Basic (server) */ \
  { 0x0000, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_EMPTY_DEFAULT() }, /* InteractionModelVersion */  \
  { 0x0001, ZAP_TYPE(CHAR_STRING), 32, ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_LONG_DEFAULTS_INDEX(0) }, /* VendorName */  \
  { 0x0002, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_EMPTY_DEFAULT() }, /* VendorID */  \
  { 0x0003, ZAP_TYPE(CHAR_STRING), 32, ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_LONG_DEFAULTS_INDEX(32) }, /* ProductName */  \
  { 0x0004, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_EMPTY_DEFAULT() }, /* ProductID */  \
  { 0x0005, ZAP_TYPE(CHAR_STRING), 32, ZAP_ATTRIBUTE_MASK(SINGLETON) | ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_LONG_DEFAULTS_INDEX(64) }, /* UserLabel */  \
  { 0x0006, ZAP_TYPE(CHAR_STRING), 2, ZAP_ATTRIBUTE_MASK(SINGLETON) | ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_EMPTY_DEFAULT() }, /* Location */  \
  { 0x0007, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_SIMPLE_DEFAULT(0x00) }, /* HardwareVersion */  \
  { 0x0008, ZAP_TYPE(CHAR_STRING), 64, ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_LONG_DEFAULTS_INDEX(96) }, /* HardwareVersionString */  \
  { 0x0009, ZAP_TYPE(INT32U), 4, ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_LONG_DEFAULTS_INDEX(160) }, /* SoftwareVersion */  \
  { 0x000A, ZAP_TYPE(CHAR_STRING), 64, ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_LONG_DEFAULTS_INDEX(164) }, /* SoftwareVersionString */  \
  { 0xFFFD, ZAP_TYPE(INT16U), 2, ZAP_ATTRIBUTE_MASK(SINGLETON), ZAP_SIMPLE_DEFAULT(3) }, /* cluster revision */  \
\
  /* Endpoint: 0, Cluster: General Commissioning (server) */ \
  { 0x0000, ZAP_TYPE(OCTET_STRING), 8, 0, ZAP_LONG_DEFAULTS_INDEX(228) }, /* FabricId */  \
  { 0x0001, ZAP_TYPE(INT64U), 8, ZAP_ATTRIBUTE_MASK(WRITABLE), ZAP_LONG_DEFAULTS_INDEX(236) }, /* Breadcrumb */  \
  { 0xFFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(0x0001) }, /* cluster revision */  \
\
  /* Endpoint: 0, Cluster: Network Commissioning (server) */ \
  { 0xFFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(0x0001) }, /* cluster revision */  \
\
  /* Endpoint: 0, Cluster: General Diagnostics (server) */ \
  { 0x0000, ZAP_TYPE(ARRAY), 254, 0, ZAP_LONG_DEFAULTS_INDEX(244) }, /* NetworkInterfaces */  \
  { 0x0001, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(0x0000) }, /* RebootCount */  \
  { 0xFFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(0x0001) }, /* cluster revision */  \
\
  /* Endpoint: 0, Cluster: Do Something Cluster (server) */ \
  { 0xFFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(0x0001) }, /* cluster revision */  \
\
  /* Endpoint: 0, Cluster: WiFi Network Diagnostics (server) */ \
  { 0x0000, ZAP_TYPE(OCTET_STRING), 6, 0, ZAP_LONG_DEFAULTS_INDEX(498) }, /* bssid */  \
  { 0x0001, ZAP_TYPE(ENUM8), 1, 0, ZAP_EMPTY_DEFAULT() }, /* SecurityType */  \
  { 0x0002, ZAP_TYPE(ENUM8), 1, 0, ZAP_EMPTY_DEFAULT() }, /* WiFiVersion */  \
  { 0x0003, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(0x0000) }, /* ChannelNumber */  \
  { 0x0004, ZAP_TYPE(INT8S), 1, 0, ZAP_SIMPLE_DEFAULT(0x00) }, /* Rssi */  \
  { 0xFFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(0x0001) }, /* cluster revision */  \
\
  /* Endpoint: 0, Cluster: Ethernet Network Diagnostics (server) */ \
  { 0x0002, ZAP_TYPE(INT64U), 8, 0, ZAP_LONG_DEFAULTS_INDEX(504) }, /* PacketRxCount */  \
  { 0x0003, ZAP_TYPE(INT64U), 8, 0, ZAP_LONG_DEFAULTS_INDEX(512) }, /* PacketTxCount */  \
  { 0x0004, ZAP_TYPE(INT64U), 8, 0, ZAP_LONG_DEFAULTS_INDEX(520) }, /* TxErrCount */  \
  { 0x0005, ZAP_TYPE(INT64U), 8, 0, ZAP_LONG_DEFAULTS_INDEX(528) }, /* CollisionCount */  \
  { 0x0006, ZAP_TYPE(INT64U), 8, 0, ZAP_LONG_DEFAULTS_INDEX(536) }, /* OverrunCount */  \
  { 0xFFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(0x0001) }, /* cluster revision */  \
\
  /* Endpoint: 0, Cluster: Operational Credentials (server) */ \
  { 0x0001, ZAP_TYPE(ARRAY), 254, 0, ZAP_LONG_DEFAULTS_INDEX(544) }, /* fabrics list */  \
  { 0xFFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(0x0001) }, /* cluster revision */  \
\
  /* Endpoint: 1, Cluster: Temperature Measurement (server) */ \
  { 0x0000, ZAP_TYPE(INT16S), 2, 0, ZAP_SIMPLE_DEFAULT(0x8000) }, /* measured value */  \
  { 0x0001, ZAP_TYPE(INT16S), 2, 0, ZAP_SIMPLE_DEFAULT(0x8000) }, /* min measured value */  \
  { 0x0002, ZAP_TYPE(INT16S), 2, 0, ZAP_SIMPLE_DEFAULT(0x8000) }, /* max measured value */  \
  { 0xFFFD, ZAP_TYPE(INT16U), 2, 0, ZAP_SIMPLE_DEFAULT(3) }, /* cluster revision */  \
}


// This is an array of EmberAfCluster structures.
#define ZAP_ATTRIBUTE_INDEX(index) ((EmberAfAttributeMetadata *)(&generatedAttributes[index]))

// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS   \
const EmberAfGenericClusterFunction chipFuncArrayBasicServer[] = {\
  (EmberAfGenericClusterFunction) emberAfBasicClusterServerInitCallback,\
};\



#define ZAP_CLUSTER_MASK(mask) CLUSTER_MASK_ ## mask
#define GENERATED_CLUSTER_COUNT 10
#define GENERATED_CLUSTERS { \
  { 0x0028, ZAP_ATTRIBUTE_INDEX(0), 12, 240, ZAP_CLUSTER_MASK(SERVER) | ZAP_CLUSTER_MASK(INIT_FUNCTION), chipFuncArrayBasicServer }, /* Endpoint: 0, Cluster: Basic (server) */ \
  { 0x0030, ZAP_ATTRIBUTE_INDEX(12), 3, 18, ZAP_CLUSTER_MASK(SERVER), NULL }, /* Endpoint: 0, Cluster: General Commissioning (server) */ \
  { 0x0031, ZAP_ATTRIBUTE_INDEX(15), 1, 2, ZAP_CLUSTER_MASK(SERVER), NULL }, /* Endpoint: 0, Cluster: Network Commissioning (server) */ \
  { 0x0032, ZAP_ATTRIBUTE_INDEX(16), 0, 0, ZAP_CLUSTER_MASK(SERVER), NULL }, /* Endpoint: 0, Cluster: Diagnostic Logs (server) */ \
  { 0x0033, ZAP_ATTRIBUTE_INDEX(16), 3, 258, ZAP_CLUSTER_MASK(SERVER), NULL }, /* Endpoint: 0, Cluster: General Diagnostics (server) */ \
  { 0x0034, ZAP_ATTRIBUTE_INDEX(19), 1, 2, ZAP_CLUSTER_MASK(SERVER), NULL }, /* Endpoint: 0, Cluster: Do Something Cluster (server) */ \
  { 0x0036, ZAP_ATTRIBUTE_INDEX(20), 6, 13, ZAP_CLUSTER_MASK(SERVER), NULL }, /* Endpoint: 0, Cluster: WiFi Network Diagnostics (server) */ \
  { 0x0037, ZAP_ATTRIBUTE_INDEX(26), 6, 42, ZAP_CLUSTER_MASK(SERVER), NULL }, /* Endpoint: 0, Cluster: Ethernet Network Diagnostics (server) */ \
  { 0x003E, ZAP_ATTRIBUTE_INDEX(32), 2, 256, ZAP_CLUSTER_MASK(SERVER), NULL }, /* Endpoint: 0, Cluster: Operational Credentials (server) */ \
  { 0x0402, ZAP_ATTRIBUTE_INDEX(34), 4, 8, ZAP_CLUSTER_MASK(SERVER), NULL }, /* Endpoint: 1, Cluster: Temperature Measurement (server) */ \
}


#define ZAP_CLUSTER_INDEX(index) ((EmberAfCluster*)(&generatedClusters[index]))


// This is an array of EmberAfEndpointType structures.
#define GENERATED_ENDPOINT_TYPES { \
  { ZAP_CLUSTER_INDEX(0), 9, 831 }, \
  { ZAP_CLUSTER_INDEX(9), 1, 8 }, \
}



// Largest attribute size is needed for various buffers
#define ATTRIBUTE_LARGEST (255)

// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE (240)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE (839)

// Number of fixed endpoints
#define FIXED_ENDPOINT_COUNT (2)

// Array of endpoints that are supported, the data inside
// the array is the endpoint number.
#define FIXED_ENDPOINT_ARRAY { 0x0000, 0x0001 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 0x0105, 0x0105 }

// Array of device ids
#define FIXED_DEVICE_IDS { 0, 0 }

// Array of device versions
#define FIXED_DEVICE_VERSIONS { 1, 1 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0, 1 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0, 0 }


// Array of EmberAfCommandMetadata structs.
#define ZAP_COMMAND_MASK(mask) COMMAND_MASK_ ## mask
#define EMBER_AF_GENERATED_COMMAND_COUNT (36)
#define GENERATED_COMMANDS { \
\
  /* Endpoint: 0, Cluster: Basic (server) */ \
  { 0x0028, 0x00, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* StartUp */ \
  { 0x0028, 0x01, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* ShutDown */ \
  { 0x0028, 0x02, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* Leave */ \
\
  /* Endpoint: 0, Cluster: General Commissioning (server) */ \
  { 0x0030, 0x00, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* ArmFailSafe */ \
  { 0x0030, 0x01, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* ArmFailSafeResponse */ \
  { 0x0030, 0x02, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* SetRegulatoryConfig */ \
  { 0x0030, 0x03, ZAP_COMMAND_MASK(OUTGOING_SERVER) }, /* SetRegulatoryConfigResponse */ \
  { 0x0030, 0x04, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* CommissioningComplete */ \
  { 0x0030, 0x05, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* CommissioningCompleteResponse */ \
\
  /* Endpoint: 0, Cluster: Network Commissioning (server) */ \
  { 0x0031, 0x00, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* ScanNetworks */ \
  { 0x0031, 0x01, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* ScanNetworksResponse */ \
  { 0x0031, 0x02, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* AddWiFiNetwork */ \
  { 0x0031, 0x03, ZAP_COMMAND_MASK(OUTGOING_SERVER) }, /* AddWiFiNetworkResponse */ \
  { 0x0031, 0x04, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* UpdateWiFiNetwork */ \
  { 0x0031, 0x05, ZAP_COMMAND_MASK(OUTGOING_SERVER) }, /* UpdateWiFiNetworkResponse */ \
  { 0x0031, 0x0A, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* RemoveNetwork */ \
  { 0x0031, 0x0B, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* RemoveNetworkResponse */ \
  { 0x0031, 0x0C, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* EnableNetwork */ \
  { 0x0031, 0x0D, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* EnableNetworkResponse */ \
  { 0x0031, 0x0E, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* DisableNetwork */ \
  { 0x0031, 0x0F, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* DisableNetworkResponse */ \
  { 0x0031, 0x10, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* GetLastNetworkCommissioningResult */ \
\
  /* Endpoint: 0, Cluster: Diagnostic Logs (server) */ \
  { 0x0032, 0x00, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* RetrieveLogsRequest */ \
\
  /* Endpoint: 0, Cluster: Do Something Cluster (server) */ \
  { 0x0034, 0x00, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* DoSomething */ \
\
  /* Endpoint: 0, Cluster: Ethernet Network Diagnostics (server) */ \
  { 0x0037, 0x00, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* ResetCounts */ \
\
  /* Endpoint: 0, Cluster: Operational Credentials (server) */ \
  { 0x003E, 0x00, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* SetFabric */ \
  { 0x003E, 0x01, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* SetFabricResponse */ \
  { 0x003E, 0x04, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* OpCSRRequest */ \
  { 0x003E, 0x05, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* OpCSRResponse */ \
  { 0x003E, 0x06, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* AddOpCert */ \
  { 0x003E, 0x08, ZAP_COMMAND_MASK(INCOMING_CLIENT) }, /* OpCertResponse */ \
  { 0x003E, 0x09, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* UpdateFabricLabel */ \
  { 0x003E, 0x0A, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* RemoveFabric */ \
  { 0x003E, 0x0B, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* RemoveAllFabrics */ \
  { 0x003E, 0xA1, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* AddTrustedRootCertificate */ \
  { 0x003E, 0xA2, ZAP_COMMAND_MASK(INCOMING_SERVER) }, /* RemoveTrustedRootCertificate */ \
}


// Array of EmberAfManufacturerCodeEntry structures for commands.
#define GENERATED_COMMAND_MANUFACTURER_CODE_COUNT (0)
#define GENERATED_COMMAND_MANUFACTURER_CODES { \
  { 0x00, 0x00 } \
}


// This is an array of EmberAfManufacturerCodeEntry structures for clusters.
#define GENERATED_CLUSTER_MANUFACTURER_CODE_COUNT (0)
#define GENERATED_CLUSTER_MANUFACTURER_CODES { \
  { 0x00, 0x00 } \
}


// This is an array of EmberAfManufacturerCodeEntry structures for attributes.
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODE_COUNT (0)
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODES { \
  { 0x00, 0x00 } \
}


// Array of EmberAfPluginReportingEntry structures.
#define ZRD(x) EMBER_ZCL_REPORTING_DIRECTION_ ## x
#define ZAP_REPORT_DIRECTION(x) ZRD(x)

// User options for plugin Reporting
#define EMBER_AF_PLUGIN_REPORTING_TABLE_SIZE (1)
#define EMBER_AF_PLUGIN_REPORTING_ENABLE_GROUP_BOUND_REPORTS

#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS_TABLE_SIZE (1)
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS { \
\
  /* Endpoint: 1, Cluster: Temperature Measurement (server) */ \
  { ZAP_REPORT_DIRECTION(REPORTED), 0x0001, 0x0402, 0x0000, ZAP_CLUSTER_MASK(SERVER), 0x0000, {{ 0, 65344, 0 }} }, /* measured value */ \
}


