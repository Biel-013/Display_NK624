#include <gui/control_screen/CONTROLView.hpp>

#define TIME_TRANSITION 15U

CONTROLView::CONTROLView()
{
}

void CONTROLView::setupScreen()
{
    CONTROLViewBase::setupScreen();
}

void CONTROLView::tearDownScreen()
{
    CONTROLViewBase::tearDownScreen();
}
void CONTROLView::TransitionEnd_Control()
{
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(255, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void CONTROLView::TransitionBegin_Control()
{
    FRONTGROUND.setAlpha(255);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}
