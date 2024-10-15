#include <gui/blank_screen/BlankView.hpp>

BlankView::BlankView() : isDirectionForward(true)  // Start with Forward direction
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
    // Toggle motor direction
    if (isDirectionForward)
    {
        // Change direction to Reverse
        // Unicode::snprintf(Direction, 20, "Direction: Reverse");
        Direction.invalidate();  // Refresh the display

        isDirectionForward = false;  // Update the state
    }
    else
    {
        // Change direction to Forward
        // Unicode::snprintf(Direction, 20, "Direction: Forward");
        Direction.invalidate();  // Refresh the display

        isDirectionForward = true;  // Update the state
    }
    
}