#ifndef LOGO_SCREENVIEW_HPP
#define LOGO_SCREENVIEW_HPP

#include <gui_generated/logo_screen_screen/Logo_ScreenViewBase.hpp>
#include <gui/logo_screen_screen/Logo_ScreenPresenter.hpp>

class Logo_ScreenView : public Logo_ScreenViewBase
{
public:
    Logo_ScreenView();
    virtual ~Logo_ScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

protected:

};

#endif // LOGO_SCREENVIEW_HPP
