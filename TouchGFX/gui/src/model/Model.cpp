#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() : modelListener(0), directionButtonState(false)
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