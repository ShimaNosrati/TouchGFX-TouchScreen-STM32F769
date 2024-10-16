#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() : modelListener(0), directionButtonState(false), motorSpeedValue(10), inputVoltageValue(24)
{

}

void Model::tick()
{

}

void Model::saveDirectionButton(bool buttonState)
{
    directionButtonState = buttonState;
}

bool Model::getDirectionButton()
{
    return directionButtonState;
}

void Model::saveSpeedValue(int speedValue)
{
    motorSpeedValue = speedValue;
}

int Model::getSpeedValue()
{
    return motorSpeedValue;
}

void Model::saveInVoltageValue(int voltageValue)
{
    inputVoltageValue = voltageValue;
}

int Model::getInVoltageValue()
{
    return inputVoltageValue;
}