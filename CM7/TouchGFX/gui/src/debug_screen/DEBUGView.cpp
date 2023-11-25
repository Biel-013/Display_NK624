#include <gui/debug_screen/DEBUGView.hpp>

#define TIME_TRANSITION 15U

DEBUGView::DEBUGView()
{

}

void DEBUGView::setupScreen()
{
    DEBUGViewBase::setupScreen();
}

void DEBUGView::tearDownScreen()
{
    DEBUGViewBase::tearDownScreen();
}

void DEBUGView::TransitionBegin_Debug()
{
FRONTGROUND.setAlpha(255);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void DEBUGView::TransitionEnd_Debug()
{
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(255, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}