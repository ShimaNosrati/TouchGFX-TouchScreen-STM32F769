#ifndef MOTORDATAPRESENTER_HPP
#define MOTORDATAPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class MotorDataView;

class MotorDataPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    MotorDataPresenter(MotorDataView& v);

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

    virtual ~MotorDataPresenter() {}

private:
    MotorDataPresenter();

    MotorDataView& view;
};

#endif // MOTORDATAPRESENTER_HPP
