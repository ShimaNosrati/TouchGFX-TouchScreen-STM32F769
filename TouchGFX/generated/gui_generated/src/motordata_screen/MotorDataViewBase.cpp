/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/motordata_screen/MotorDataViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

MotorDataViewBase::MotorDataViewBase() :
    flexButtonCallback(this, &MotorDataViewBase::flexButtonCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_CONTAINERS_LARGE_NARROW_LIGHT_ID));
    scalableImage1.setPosition(0, 0, 800, 480);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(scalableImage1);

    scalableImage2_3.setBitmap(touchgfx::Bitmap(BITMAP_ICON_ID));
    scalableImage2_3.setPosition(26, 357, 127, 123);
    scalableImage2_3.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    scalableImage2_3.setAlpha(160);
    add(scalableImage2_3);

    nextButton.setBoxWithBorderPosition(0, 0, 77, 72);
    nextButton.setBorderSize(7);
    nextButton.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(250, 198, 10), touchgfx::Color::getColorFromRGB(51, 102, 153));
    nextButton.setIconBitmaps(Bitmap(BITMAP_NEXT_ID), Bitmap(BITMAP_NEXT_ID));
    nextButton.setIconXY(10, 10);
    nextButton.setAction(flexButtonCallback);
    nextButton.setPosition(692, 385, 77, 72);
    add(nextButton);

    motorSpd.setXY(38, 63);
    motorSpd.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    motorSpd.setLinespacing(0);
    Unicode::snprintf(motorSpdBuffer, MOTORSPD_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_VS01).getText());
    motorSpd.setWildcard(motorSpdBuffer);
    motorSpd.resizeToCurrentText();
    motorSpd.setTypedText(touchgfx::TypedText(T___SINGLEUSE_DMYZ));
    add(motorSpd);

    motorDir.setXY(38, 136);
    motorDir.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    motorDir.setLinespacing(0);
    Unicode::snprintf(motorDirBuffer, MOTORDIR_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_74MD).getText());
    motorDir.setWildcard(motorDirBuffer);
    motorDir.resizeToCurrentText();
    motorDir.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CG1S));
    add(motorDir);

    speedGuage.setBackground(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_SMALL_BACKGROUNDS_LIGHT_FILLED_ID));
    speedGuage.setPosition(546, 25, 184, 184);
    speedGuage.setCenter(92, 92);
    speedGuage.setStartEndAngle(-119, 122);
    speedGuage.setRange(0, 100);
    speedGuage.setValue(50);
    speedGuage.setNeedle(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_SMALL_NEEDLES_ROUGH_ID, 8, 53);
    speedGuage.setMovingNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    speedGuage.setSteadyNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    speedGuage.setArcVisible();
    speedGuagePainter.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_SMALL_FILLERS_SWOOP_ID));
    speedGuage.getArc().setPainter(speedGuagePainter);
    speedGuage.getArc().setRadius(79);
    speedGuage.getArc().setLineWidth(78);
    speedGuage.getArc().setCapPrecision(180);
    speedGuage.setArcPosition(19, 19, 146, 108);
    add(speedGuage);

    InVoltage.setXY(38, 209);
    InVoltage.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    InVoltage.setLinespacing(0);
    Unicode::snprintf(InVoltageBuffer, INVOLTAGE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_4RG6).getText());
    InVoltage.setWildcard(InVoltageBuffer);
    InVoltage.resizeToCurrentText();
    InVoltage.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4ZH3));
    add(InVoltage);

    OutVoltage.setXY(38, 282);
    OutVoltage.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    OutVoltage.setLinespacing(0);
    Unicode::snprintf(OutVoltageBuffer, OUTVOLTAGE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_L1I0).getText());
    OutVoltage.setWildcard(OutVoltageBuffer);
    OutVoltage.resizeToCurrentText();
    OutVoltage.setTypedText(touchgfx::TypedText(T___SINGLEUSE_1MDP));
    add(OutVoltage);

    scalableImage2.setBitmap(touchgfx::Bitmap(BITMAP_ICON_ID));
    scalableImage2.setPosition(306, 418, 55, 52);
    scalableImage2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    scalableImage2.setAlpha(160);
    add(scalableImage2);

    scalableImage2_1.setBitmap(touchgfx::Bitmap(BITMAP_ICON_ID));
    scalableImage2_1.setPosition(153, 406, 75, 74);
    scalableImage2_1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    scalableImage2_1.setAlpha(160);
    add(scalableImage2_1);

    scalableImage2_2.setBitmap(touchgfx::Bitmap(BITMAP_ICON_ID));
    scalableImage2_2.setPosition(218, 339, 104, 93);
    scalableImage2_2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    scalableImage2_2.setAlpha(160);
    add(scalableImage2_2);
}

MotorDataViewBase::~MotorDataViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void MotorDataViewBase::setupScreen()
{

}

void MotorDataViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &nextButton)
    {
        //Interaction1
        //When nextButton clicked change screen to Blank
        //Go to Blank with screen transition towards East
        application().gotoBlankScreenSlideTransitionEast();
    }
}
