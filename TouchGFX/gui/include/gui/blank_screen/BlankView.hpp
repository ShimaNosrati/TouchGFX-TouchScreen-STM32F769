#ifndef BLANKVIEW_HPP
#define BLANKVIEW_HPP

#include <gui_generated/blank_screen/BlankViewBase.hpp>
#include <gui/blank_screen/BlankPresenter.hpp>

class BlankView : public BlankViewBase
{
public:
    BlankView();
    virtual ~BlankView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void buttonPressed();
    virtual void setDirectionState(bool state);

    virtual void speedSliderUpdated(int value);
    virtual void setSpeedValue(int speedValue);

    virtual void voltageSliderUpdated(int value);
    virtual void setVoltageValue(int voltageValue);
protected:
    bool isDirectionForward;  // Variable to store motor direction state
};

#endif // BLANKVIEW_HPP
