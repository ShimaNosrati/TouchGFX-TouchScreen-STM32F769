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
