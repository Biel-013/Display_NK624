#include <gui/driver_screen/DRIVERView.hpp>

#define TIME_TRANSITION 15U

DRIVERView::DRIVERView()
{

}

void DRIVERView::setupScreen()
{
    DRIVERViewBase::setupScreen();
}


void DRIVERView::tearDownScreen()
{
    DRIVERViewBase::tearDownScreen();
}

void DRIVERView::TransitionEnd_Driver()
{
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(255, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void DRIVERView::TransitionBegin_Driver()
{
    CHARGE_Progress.updateValue(70, 2*45);

    VELOCIMETRO_gauge.updateValue(99, 45);

    FRONTGROUND.setAlpha(255);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}