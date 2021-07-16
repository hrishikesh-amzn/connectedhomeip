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

#include <controller/CHIPCluster.h>
#include <core/CHIPCallback.h>
#include <lib/support/Span.h>

namespace chip {
namespace Controller {

constexpr ClusterId kFlowMeasurementClusterId = 0x0404;
constexpr ClusterId kLevelControlClusterId = 0x0008;
constexpr ClusterId kOnOffClusterId = 0x0006;
constexpr ClusterId kPressureMeasurementClusterId = 0x0403;
constexpr ClusterId kPumpConfigurationAndControlClusterId = 0x0200;
constexpr ClusterId kTemperatureMeasurementClusterId = 0x0402;

class DLL_EXPORT FlowMeasurementCluster : public ClusterBase
{
public:
    FlowMeasurementCluster() : ClusterBase(kFlowMeasurementClusterId) {}
    ~FlowMeasurementCluster() {}

    // Cluster Attributes
    CHIP_ERROR DiscoverAttributes(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeMeasuredValue(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeMinMeasuredValue(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeMaxMeasuredValue(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeClusterRevision(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ConfigureAttributeMeasuredValue(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint16_t minInterval, uint16_t maxInterval, int16_t change);
    CHIP_ERROR ReportAttributeMeasuredValue(Callback::Cancelable * onReportCallback);
};

class DLL_EXPORT LevelControlCluster : public ClusterBase
{
public:
    LevelControlCluster() : ClusterBase(kLevelControlClusterId) {}
    ~LevelControlCluster() {}

    // Cluster Commands
    CHIP_ERROR Move(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint8_t moveMode, uint8_t rate, uint8_t optionMask, uint8_t optionOverride);
    CHIP_ERROR MoveToLevel(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint8_t level, uint16_t transitionTime, uint8_t optionMask, uint8_t optionOverride);
    CHIP_ERROR MoveToLevelWithOnOff(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint8_t level, uint16_t transitionTime);
    CHIP_ERROR MoveWithOnOff(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint8_t moveMode, uint8_t rate);
    CHIP_ERROR Step(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint8_t stepMode, uint8_t stepSize, uint16_t transitionTime, uint8_t optionMask, uint8_t optionOverride);
    CHIP_ERROR StepWithOnOff(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint8_t stepMode, uint8_t stepSize, uint16_t transitionTime);
    CHIP_ERROR Stop(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint8_t optionMask, uint8_t optionOverride);
    CHIP_ERROR StopWithOnOff(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);

    // Cluster Attributes
    CHIP_ERROR DiscoverAttributes(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeCurrentLevel(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeClusterRevision(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ConfigureAttributeCurrentLevel(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint16_t minInterval, uint16_t maxInterval, uint8_t change);
    CHIP_ERROR ReportAttributeCurrentLevel(Callback::Cancelable * onReportCallback);

private:
    static constexpr CommandId kMoveCommandId = 0x01;
    static constexpr CommandId kMoveToLevelCommandId = 0x00;
    static constexpr CommandId kMoveToLevelWithOnOffCommandId = 0x04;
    static constexpr CommandId kMoveWithOnOffCommandId = 0x05;
    static constexpr CommandId kStepCommandId = 0x02;
    static constexpr CommandId kStepWithOnOffCommandId = 0x06;
    static constexpr CommandId kStopCommandId = 0x03;
    static constexpr CommandId kStopWithOnOffCommandId = 0x07;
};

class DLL_EXPORT OnOffCluster : public ClusterBase
{
public:
    OnOffCluster() : ClusterBase(kOnOffClusterId) {}
    ~OnOffCluster() {}

    // Cluster Commands
    CHIP_ERROR Off(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR On(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR Toggle(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);

    // Cluster Attributes
    CHIP_ERROR DiscoverAttributes(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeOnOff(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeClusterRevision(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);

private:
    static constexpr CommandId kOffCommandId = 0x00;
    static constexpr CommandId kOnCommandId = 0x01;
    static constexpr CommandId kToggleCommandId = 0x02;
};

class DLL_EXPORT PressureMeasurementCluster : public ClusterBase
{
public:
    PressureMeasurementCluster() : ClusterBase(kPressureMeasurementClusterId) {}
    ~PressureMeasurementCluster() {}

    // Cluster Attributes
    CHIP_ERROR DiscoverAttributes(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeMeasuredValue(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeMinMeasuredValue(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeMaxMeasuredValue(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeClusterRevision(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ConfigureAttributeMeasuredValue(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint16_t minInterval, uint16_t maxInterval, int16_t change);
    CHIP_ERROR ReportAttributeMeasuredValue(Callback::Cancelable * onReportCallback);
};

class DLL_EXPORT PumpConfigurationAndControlCluster : public ClusterBase
{
public:
    PumpConfigurationAndControlCluster() : ClusterBase(kPumpConfigurationAndControlClusterId) {}
    ~PumpConfigurationAndControlCluster() {}

    // Cluster Attributes
    CHIP_ERROR DiscoverAttributes(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeMaxPressure(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeMaxSpeed(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeMaxFlow(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeEffectiveOperationMode(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeEffectiveControlMode(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeCapacity(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeOperationMode(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeClusterRevision(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR WriteAttributeOperationMode(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint8_t value);
    CHIP_ERROR ConfigureAttributeCapacity(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint16_t minInterval, uint16_t maxInterval, int16_t change);
    CHIP_ERROR ReportAttributeCapacity(Callback::Cancelable * onReportCallback);
};

class DLL_EXPORT TemperatureMeasurementCluster : public ClusterBase
{
public:
    TemperatureMeasurementCluster() : ClusterBase(kTemperatureMeasurementClusterId) {}
    ~TemperatureMeasurementCluster() {}

    // Cluster Attributes
    CHIP_ERROR DiscoverAttributes(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeMeasuredValue(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeMinMeasuredValue(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeMaxMeasuredValue(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ReadAttributeClusterRevision(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback);
    CHIP_ERROR ConfigureAttributeMeasuredValue(Callback::Cancelable * onSuccessCallback, Callback::Cancelable * onFailureCallback, uint16_t minInterval, uint16_t maxInterval, int16_t change);
    CHIP_ERROR ReportAttributeMeasuredValue(Callback::Cancelable * onReportCallback);
};

} // namespace Controller
} // namespace chip
