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

void CONTROLView::LORA_Begin()
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

void CONTROLView::LORA_End()
{
    BOTTON_lora.setVisible(false);
    BOTTON_lora.invalidate();

    LORA_PopUp.clearMoveAnimationEndedAction();
    LORA_PopUp.startMoveAnimation(230, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}