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

void MotorDataView::setDirection(bool buttonState)
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
    
}
