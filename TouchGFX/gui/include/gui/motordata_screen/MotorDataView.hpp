#ifndef MOTORDATAVIEW_HPP
#define MOTORDATAVIEW_HPP

#include <gui_generated/motordata_screen/MotorDataViewBase.hpp>
#include <gui/motordata_screen/MotorDataPresenter.hpp>

class MotorDataView : public MotorDataViewBase
{
public:
    MotorDataView();
    virtual ~MotorDataView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // MOTORDATAVIEW_HPP
