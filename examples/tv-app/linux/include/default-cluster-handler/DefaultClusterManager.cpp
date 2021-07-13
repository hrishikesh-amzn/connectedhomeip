/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
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

#include "DefaultClusterManager.h"

#include <app/util/af.h>
#include <app/util/basic-types.h>
#include <lib/core/CHIPSafeCasts.h>
#include <support/CodeUtils.h>
#include <core/CHIPTLVDebug.hpp>
#include <system/SystemPacketBuffer.h>
#include <system/TLVPacketBufferBackingStore.h>
#include <app/clusters/default-cluster-server/default-cluster-server.h>

#include <string>

using namespace std;

struct DummyResponseData
{
    uint8_t responseCommandId = 0x01;
    uint8_t * commandData;
    uint16_t commandDataLength; //TODO find right data type for length
};

void TLVPrettyPrinter(const char * aFormat, ...)
{
    va_list args;

    va_start(args, aFormat);

    vprintf(aFormat, args);

    va_end(args);
}

/**
* Creates a UnknownClusterResponse with response data for DoSomethingClusterResponse command
*/
UnknownClusterCommandResponse getDoSomethingResponseData()
{
    string data = "Hello from Server!";
    string moreData = "Here's more data";
    chip::System::PacketBufferHandle packetBufferHandle = chip::System::PacketBufferHandle::New(chip::System::PacketBuffer::kMaxSize);
    chip::System::PacketBufferTLVWriter pWriter;
    pWriter.Init(std::move(packetBufferHandle), true);
    chip::TLV::TLVType outerContainerType;
    //TODO: Figure out how to use anonymous tags in starting container. Using Anonymous tags causes failure in CopyElement
    pWriter.StartContainer(chip::TLV::CommonTag(0), chip::TLV::TLVType::kTLVType_Structure, outerContainerType);
    pWriter.PutString(chip::TLV::ContextTag(0), data.c_str());
    pWriter.PutString(chip::TLV::ContextTag(1), moreData.c_str());
    pWriter.EndContainer(outerContainerType);
    pWriter.Finalize(&packetBufferHandle);

    uint16_t commandDataLength = packetBufferHandle->DataLength();
    uint8_t * commandData  = new uint8_t[commandDataLength];
    packetBufferHandle->Read(commandData, commandDataLength);

    UnknownClusterCommandResponse response;
    response.responseData = commandData;
    response.responseDataLength = commandDataLength;
    response.responseCommandId = 0x01;

    return response;
}

UnknownClusterCommandResponse handleUnknownCluster(chip::ClusterId aClusterId, chip::CommandId aCommandId, chip::EndpointId aEndpointId, uint8_t commandArguments [], size_t commandArgumentSize)
{
    //Print incoming command data
    chip::TLV::TLVReader reader;
	reader.Init(commandArguments, (uint32_t) commandArgumentSize);
	chip::TLV::Debug::Dump(reader, TLVPrettyPrinter);

    //TODO: Insert code here to delegate the command data handling to provided endpoint and return proper response. 
    //For testing purposes a dummy response is returned.
    UnknownClusterCommandResponse doSomethingResponseCommandData = getDoSomethingResponseData();

    return doSomethingResponseCommandData; 
}