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

    nextButton.setBoxWithBorderPosition(0, 0, 77, 72);
    nextButton.setBorderSize(7);
    nextButton.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(250, 198, 10), touchgfx::Color::getColorFromRGB(51, 102, 153));
    nextButton.setIconBitmaps(Bitmap(BITMAP_NEXT_ID), Bitmap(BITMAP_NEXT_ID));
    nextButton.setIconXY(10, 10);
    nextButton.setAction(flexButtonCallback);
    nextButton.setPosition(692, 385, 77, 72);
    add(nextButton);

    textArea3.setXY(38, 63);
    textArea3.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea3.setLinespacing(0);
    textArea3.setWildcard(touchgfx::TypedText(T___SINGLEUSE_VS01).getText());
    textArea3.resizeToCurrentText();
    textArea3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_DMYZ));
    add(textArea3);

    textArea4.setXY(38, 136);
    textArea4.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea4.setLinespacing(0);
    textArea4.setWildcard(touchgfx::TypedText(T___SINGLEUSE_74MD).getText());
    textArea4.resizeToCurrentText();
    textArea4.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CG1S));
    add(textArea4);

    gauge1.setBackground(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_SMALL_BACKGROUNDS_LIGHT_FILLED_ID));
    gauge1.setPosition(546, 25, 184, 184);
    gauge1.setCenter(92, 92);
    gauge1.setStartEndAngle(-119, 122);
    gauge1.setRange(0, 100);
    gauge1.setValue(50);
    gauge1.setNeedle(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_SMALL_NEEDLES_ROUGH_ID, 8, 53);
    gauge1.setMovingNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    gauge1.setSteadyNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    gauge1.setArcVisible();
    gauge1Painter.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_GAUGE_SMALL_FILLERS_SWOOP_ID));
    gauge1.getArc().setPainter(gauge1Painter);
    gauge1.getArc().setRadius(79);
    gauge1.getArc().setLineWidth(78);
    gauge1.getArc().setCapPrecision(180);
    gauge1.setArcPosition(19, 19, 146, 108);
    add(gauge1);

    textArea5.setXY(38, 209);
    textArea5.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5.setLinespacing(0);
    textArea5.setWildcard(touchgfx::TypedText(T___SINGLEUSE_4RG6).getText());
    textArea5.resizeToCurrentText();
    textArea5.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4ZH3));
    add(textArea5);

    textArea5_1.setXY(38, 281);
    textArea5_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5_1.setLinespacing(0);
    textArea5_1.setWildcard(touchgfx::TypedText(T___SINGLEUSE_L1I0).getText());
    textArea5_1.resizeToCurrentText();
    textArea5_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_1MDP));
    add(textArea5_1);
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
