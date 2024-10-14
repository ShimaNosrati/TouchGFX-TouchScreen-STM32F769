#ifndef LOGO_SCREENPRESENTER_HPP
#define LOGO_SCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Logo_ScreenView;

class Logo_ScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Logo_ScreenPresenter(Logo_ScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Logo_ScreenPresenter() {}

private:
    Logo_ScreenPresenter();

    Logo_ScreenView& view;
};

#endif // LOGO_SCREENPRESENTER_HPP
