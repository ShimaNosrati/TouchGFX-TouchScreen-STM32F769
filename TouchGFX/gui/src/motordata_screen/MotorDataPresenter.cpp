#include <gui/motordata_screen/MotorDataView.hpp>
#include <gui/motordata_screen/MotorDataPresenter.hpp>

MotorDataPresenter::MotorDataPresenter(MotorDataView& v)
    : view(v)
{

}

void MotorDataPresenter::activate()
{
    view.setDirection(model->getDirectionButton());
}

void MotorDataPresenter::deactivate()
{

}
