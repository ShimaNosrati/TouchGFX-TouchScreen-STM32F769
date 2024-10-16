#include <gui/blank_screen/BlankView.hpp>
#include <gui/blank_screen/BlankPresenter.hpp>

BlankPresenter::BlankPresenter(BlankView& v)
    : view(v)
{

}

void BlankPresenter::activate()
{
    view.setDirectionState(model->getDirectionButton());
}

void BlankPresenter::deactivate()
{

}

void BlankPresenter::saveDirectionButton(bool buttonState)
{
    model->saveDirectionButton(buttonState);
}
