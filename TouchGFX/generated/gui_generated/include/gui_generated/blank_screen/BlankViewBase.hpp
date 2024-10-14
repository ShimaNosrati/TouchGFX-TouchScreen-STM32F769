/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef BLANKVIEWBASE_HPP
#define BLANKVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/blank_screen/BlankPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/containers/Slider.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>

class BlankViewBase : public touchgfx::View<BlankPresenter>
{
public:
    BlankViewBase();
    virtual ~BlankViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void speedSliderUpdated(int value)
    {
        // Override and implement this function in Blank
    }
    virtual void voltageSliderUpdated(int value)
    {
        // Override and implement this function in Blank
    }
    virtual void buttonPressed()
    {
        // Override and implement this function in Blank
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::ScalableImage scalableImage1;
    touchgfx::Slider sliderVoltage;
    touchgfx::IconButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  >  backButton;
    touchgfx::TextAreaWithOneWildcard textArea3;
    touchgfx::TextAreaWithOneWildcard textArea4;
    touchgfx::TextAreaWithOneWildcard textArea5;
    touchgfx::TextAreaWithOneWildcard textArea5_1;
    touchgfx::Slider sliderSpeed;
    touchgfx::ToggleButton toggleButton1;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<BlankViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;
    touchgfx::Callback<BlankViewBase, const touchgfx::Slider&, int> sliderValueChangedCallback;
    touchgfx::Callback<BlankViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);
    void sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value);
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // BLANKVIEWBASE_HPP
