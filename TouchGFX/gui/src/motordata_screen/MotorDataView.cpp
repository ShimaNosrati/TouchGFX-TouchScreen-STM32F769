#include <gui/motordata_screen/MotorDataView.hpp>

MotorDataView::MotorDataView()
{

}

void MotorDataView::setupScreen()
{
    MotorDataViewBase::setupScreen();
}

void MotorDataView::tearDownScreen()
{
    MotorDataViewBase::tearDownScreen();
}

void MotorDataView::setValues(bool buttonState, int speedValue, int voltageValue)
{
    if (buttonState)
    {
        // Change direction to Reverse
        Unicode::snprintf(motorDirBuffer, MOTORDIR_SIZE, "Reverse");
        motorDir.invalidate();  // Refresh the display
    }
    else
    {
        // Change direction to Forward
        Unicode::snprintf(motorDirBuffer, MOTORDIR_SIZE, "Forward");
        motorDir.invalidate();  // Refresh the display
    }
    Unicode::snprintf(motorSpdBuffer, MOTORSPD_SIZE, "%d", speedValue);
    speedGuage.setValue(speedValue);
    speedGuage.invalidate();
    motorSpd.invalidate();
    
    


    Unicode::snprintf(InVoltageBuffer, INVOLTAGE_SIZE, "%d", voltageValue);
    InVoltage.invalidate();

    Unicode::snprintf(OutVoltageBuffer, OUTVOLTAGE_SIZE, "%d", voltageValue - 2);
    OutVoltage.invalidate();


    
}

