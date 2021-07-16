#include <app/Command.h>
#include <app/util/af.h>

bool emberAfDoSomethingClusterDoSomethingCallback(chip::app::Command * commandObj, unsigned char *)
{
    EmberAfStatus status = EMBER_ZCL_STATUS_SUCCESS;
    emberAfSendImmediateDefaultResponse(status);
    return true;
}