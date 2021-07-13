/**
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

/****************************************************************************
 * @file
 * @brief Routines for handling unknown cluster.
 *******************************************************************************
 ******************************************************************************/

#include <app/Command.h>
#include <app/clusters/default-cluster-server/default-cluster-server.h>
#include <app/util/af.h>

UnknownClusterCommandResponse handleUnknownCluster(chip::ClusterId aClusterId, chip::CommandId aCommandId, chip::EndpointId aEndpointId, uint8_t commandArguments [], size_t commandArgumentSize);

void sendResponse(chip::app::Command * command, chip::ClusterId aClusterId, chip::CommandId aCommandId, uint8_t * commandData, uint16_t commandDataLength)
{
    CHIP_ERROR err                         = CHIP_NO_ERROR;
    chip::app::CommandPathParams cmdParams = { emberAfCurrentEndpoint(), 
                                               /* group id */ 0, 
                                               aClusterId,
                                               aCommandId,
                                               (chip::app::CommandPathFlags::kEndpointIdValid) };

    chip::TLV::TLVWriter * tlvWriter          = nullptr;
    SuccessOrExit(err = command->PrepareCommand(cmdParams));
    VerifyOrExit((tlvWriter = command->GetCommandDataElementTLVWriter()) != nullptr, err = CHIP_ERROR_INCORRECT_STATE);

    /**
    * TODO: Find a better way to copy pre-encoded TLV Data into the writer.
    * .PutPreEncodedContainer requires to specify a Tag and Element Type which cannot be known unless the
    * TLV encoded data is read
    */
    chip::TLV::TLVReader tlvReader;
	tlvReader.Init(commandData, (uint32_t) commandDataLength);
    
    while (tlvReader.Next() == CHIP_NO_ERROR)
    {
        SuccessOrExit(err = tlvWriter->CopyElement(tlvReader));
    }
    SuccessOrExit(err = command->FinishCommand());
exit:
    if (err != CHIP_NO_ERROR)
    {
        ChipLogError(Zcl, "Failed to send Response. Error:%s", chip::ErrorStr(err));
    }
}

bool emberAfUnknownClusterCallBack(chip::app::Command * apCommandObj, chip::ClusterId aClusterId, chip::CommandId aCommandId, chip::EndpointId aEndpointId, uint8_t * commandData, uint32_t commandDataLength)
{
    UnknownClusterCommandResponse response = handleUnknownCluster(aClusterId, aCommandId, aEndpointId, commandData, commandDataLength);
    sendResponse(apCommandObj, aClusterId, response.responseCommandId, response.responseData, response.responseDataLength);
    return true;
}