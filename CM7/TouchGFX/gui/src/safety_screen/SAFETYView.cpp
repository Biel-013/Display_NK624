#include <gui/safety_screen/SAFETYView.hpp>

#define TIME_TRANSITION 15U

SAFETYView::SAFETYView()
{

}

void SAFETYView::setupScreen()
{
    SAFETYViewBase::setupScreen();
}

void SAFETYView::tearDownScreen()
{
    SAFETYViewBase::tearDownScreen();
}

void SAFETYView::TransitionBegin_Safety()
{
    FRONTGROUND.setAlpha(255);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void SAFETYView::TransitionEnd_Safety()
{
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(255, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}