#include <gui/blank_screen/BlankView.hpp>
#include <gui/blank_screen/BlankPresenter.hpp>

BlankPresenter::BlankPresenter(BlankView& v)
    : view(v)
{

}

void BlankPresenter::activate()
{
    view.setDirectionState(model->getDirectionButton());
    view.setSpeedValue(model->getSpeedValue());
    view.setVoltageValue(model->getInVoltageValue());
}

void BlankPresenter::deactivate()
{

}

void BlankPresenter::saveDirectionButton(bool buttonState)
{
    model->saveDirectionButton(buttonState);
}

void BlankPresenter::saveSpeedValue(int speedValue)
{
    model->saveSpeedValue(speedValue);
}

void BlankPresenter::saveInVoltageValue(int voltageValue)
{
    model->saveInVoltageValue(voltageValue);
}