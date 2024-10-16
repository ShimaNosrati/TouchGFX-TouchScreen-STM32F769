/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/blank_screen/BlankViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

BlankViewBase::BlankViewBase() :
    flexButtonCallback(this, &BlankViewBase::flexButtonCallbackHandler),
    sliderValueChangedCallback(this, &BlankViewBase::sliderValueChangedCallbackHandler),
    buttonCallback(this, &BlankViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_CONTAINERS_LARGE_NARROW_LIGHT_ID));
    scalableImage1.setPosition(0, 0, 800, 480);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(scalableImage1);

    scalableImage2_3.setBitmap(touchgfx::Bitmap(BITMAP_ICON_ID));
    scalableImage2_3.setPosition(655, 311, 133, 139);
    scalableImage2_3.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    scalableImage2_3.setAlpha(160);
    add(scalableImage2_3);

    scalableImage2_2.setBitmap(touchgfx::Bitmap(BITMAP_ICON_ID));
    scalableImage2_2.setPosition(558, 385, 97, 95);
    scalableImage2_2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    scalableImage2_2.setAlpha(160);
    add(scalableImage2_2);

    sliderVoltage.setXY(437, 216);
    sliderVoltage.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_SLIDER_HORIZONTAL_THICK_TRACK_MEDIUM_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_SLIDER_HORIZONTAL_THICK_FILLER_MEDIUM_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_SLIDER_HORIZONTAL_THICK_ROUND_LIGHT_ID));
    sliderVoltage.setupHorizontalSlider(16, 11, 0, 0, 300);
    sliderVoltage.setValueRange(0, 100);
    sliderVoltage.setValue(0);
    sliderVoltage.setNewValueCallback(sliderValueChangedCallback);
    add(sliderVoltage);

    backButton.setBoxWithBorderPosition(0, 0, 77, 72);
    backButton.setBorderSize(7);
    backButton.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(232, 195, 9), touchgfx::Color::getColorFromRGB(51, 102, 153));
    backButton.setIconBitmaps(Bitmap(BITMAP_BACK_ID), Bitmap(BITMAP_BACK_ID));
    backButton.setIconXY(10, 10);
    backButton.setAction(flexButtonCallback);
    backButton.setPosition(28, 385, 77, 72);
    add(backButton);

    motorSpeed.setXY(38, 63);
    motorSpeed.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    motorSpeed.setLinespacing(0);
    Unicode::snprintf(motorSpeedBuffer, MOTORSPEED_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_O6VV).getText());
    motorSpeed.setWildcard(motorSpeedBuffer);
    motorSpeed.resizeToCurrentText();
    motorSpeed.setTypedText(touchgfx::TypedText(T___SINGLEUSE_MAIG));
    add(motorSpeed);

    Direction.setXY(38, 136);
    Direction.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Direction.setLinespacing(0);
    Unicode::snprintf(DirectionBuffer, DIRECTION_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_JO5W).getText());
    Direction.setWildcard(DirectionBuffer);
    Direction.resizeToCurrentText();
    Direction.setTypedText(touchgfx::TypedText(T___SINGLEUSE_V3CN));
    add(Direction);

    inVolt.setXY(38, 208);
    inVolt.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    inVolt.setLinespacing(0);
    Unicode::snprintf(inVoltBuffer, INVOLT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_RI8Y).getText());
    inVolt.setWildcard(inVoltBuffer);
    inVolt.resizeToCurrentText();
    inVolt.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CUSX));
    add(inVolt);

    outVolt.setXY(36, 285);
    outVolt.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    outVolt.setLinespacing(0);
    Unicode::snprintf(outVoltBuffer, OUTVOLT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_OFAL).getText());
    outVolt.setWildcard(outVoltBuffer);
    outVolt.resizeToCurrentText();
    outVolt.setTypedText(touchgfx::TypedText(T___SINGLEUSE_V4TA));
    add(outVolt);

    sliderSpeed.setXY(437, 71);
    sliderSpeed.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_SLIDER_HORIZONTAL_THICK_TRACK_MEDIUM_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_SLIDER_HORIZONTAL_THICK_FILLER_MEDIUM_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_SLIDER_HORIZONTAL_THICK_ROUND_LIGHT_ID));
    sliderSpeed.setupHorizontalSlider(16, 11, 0, 0, 300);
    sliderSpeed.setValueRange(0, 100);
    sliderSpeed.setValue(0);
    sliderSpeed.setNewValueCallback(sliderValueChangedCallback);
    add(sliderSpeed);

    directionButton.setXY(437, 135);
    directionButton.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_TOGGLEBUTTON_MEDIUM_ROUNDED_ON_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_TOGGLEBUTTON_MEDIUM_ROUNDED_OFF_DARK_ID));
    directionButton.setAction(buttonCallback);
    add(directionButton);

    scalableImage2.setBitmap(touchgfx::Bitmap(BITMAP_ICON_ID));
    scalableImage2.setPosition(374, 403, 75, 77);
    scalableImage2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    scalableImage2.setAlpha(160);
    add(scalableImage2);

    scalableImage2_1.setBitmap(touchgfx::Bitmap(BITMAP_ICON_ID));
    scalableImage2_1.setPosition(439, 320, 119, 120);
    scalableImage2_1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    scalableImage2_1.setAlpha(160);
    add(scalableImage2_1);
}

BlankViewBase::~BlankViewBase()
{

}

void BlankViewBase::setupScreen()
{

}

void BlankViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &backButton)
    {
        //Interaction1
        //When backButton clicked change screen to MotorData
        //Go to MotorData with screen transition towards East
        application().gotoMotorDataScreenSlideTransitionEast();
    }
}

void BlankViewBase::sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &sliderSpeed)
    {
        //Interaction2
        //When sliderSpeed value changed call virtual function
        //Call speedSliderUpdated
        speedSliderUpdated(value);
    }
    if (&src == &sliderVoltage)
    {
        //Interaction3
        //When sliderVoltage value changed call virtual function
        //Call voltageSliderUpdated
        voltageSliderUpdated(value);
    }
}

void BlankViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &directionButton)
    {
        //Interaction4
        //When directionButton clicked call virtual function
        //Call buttonPressed
        buttonPressed();
    }
}
