#include <gui/blank_screen/BlankView.hpp>

BlankView::BlankView() : isDirectionForward(false)  // Start with Forward direction
{

}

void BlankView::setupScreen()
{
    BlankViewBase::setupScreen();
}

void BlankView::tearDownScreen()
{
    BlankViewBase::tearDownScreen();
}

void BlankView::buttonPressed()
{

    bool isDirectionForward = directionButton.getState();
    presenter->saveDirectionButton(isDirectionForward);
    // Toggle motor direction
    if (isDirectionForward)
    {
        // Change direction to Reverse
        Unicode::snprintf(DirectionBuffer, DIRECTION_SIZE, "Reverse");
        Direction.invalidate();  // Refresh the display
    }
    else
    {
        // Change direction to Forward
        Unicode::snprintf(DirectionBuffer, DIRECTION_SIZE, "Forward");
        Direction.invalidate();  // Refresh the display
    }
    
}

void BlankView::setDirectionState(bool buttonState)
{
    directionButton.forceState(buttonState);
    if (buttonState)
    {
        // Change direction to Reverse
        Unicode::snprintf(DirectionBuffer, DIRECTION_SIZE, "Reverse");
        Direction.invalidate();  // Refresh the display
    }
    else
    {
        // Change direction to Forward
        Unicode::snprintf(DirectionBuffer, DIRECTION_SIZE, "Forward");
        Direction.invalidate();  // Refresh the display
    }
    
}

void BlankView::speedSliderUpdated(int value)
{
    presenter->saveSpeedValue(value);
    Unicode::snprintf(motorSpeedBuffer, MOTORSPEED_SIZE, "%d", value);
    motorSpeed.invalidate();

}
void BlankView::setSpeedValue(int speedValue)
{
    sliderSpeed.setValue(speedValue);
    Unicode::snprintf(motorSpeedBuffer, MOTORSPEED_SIZE, "%d", speedValue);
    motorSpeed.invalidate();
    sliderSpeed.invalidate();
    
}

void BlankView::voltageSliderUpdated(int value)
{
    presenter->saveInVoltageValue(value);
    Unicode::snprintf(inVoltBuffer, INVOLT_SIZE, "%d", value);
    Unicode::snprintf(outVoltBuffer, OUTVOLT_SIZE, "%d", value - 2);
    inVolt.invalidate();   
    outVolt.invalidate();
}

void BlankView::setVoltageValue(int voltageValue)
{
    sliderVoltage.setValue(voltageValue);
    Unicode::snprintf(inVoltBuffer, INVOLT_SIZE, "%d", voltageValue);
    Unicode::snprintf(outVoltBuffer, OUTVOLT_SIZE, "%d", voltageValue - 2);
    inVolt.invalidate();
    outVolt.invalidate();
    sliderVoltage.invalidate();
    
}
