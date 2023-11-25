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

void DEBUGView::LORA_Begin()
{
    LORA_PopUp.setVisible(true);
    LORA_PopUp.invalidate();

    BOTTON_lora.setVisible(true);
    BOTTON_lora.invalidate();

    LORA_PopUp.clearMoveAnimationEndedAction();
    LORA_PopUp.startMoveAnimation(0, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(200, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void DEBUGView::LORA_End()
{
    BOTTON_lora.setVisible(false);
    BOTTON_lora.invalidate();

    LORA_PopUp.clearMoveAnimationEndedAction();
    LORA_PopUp.startMoveAnimation(230, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}