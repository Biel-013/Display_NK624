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

void SAFETYView::STACK_1_Begin()
{
    
    STACK_1.setVisible(true);
    STACK_1.invalidate();

    BOTTON_stack_1.setVisible(true);
    BOTTON_stack_1.invalidate();

    STACK_1.clearMoveAnimationEndedAction();
    STACK_1.startMoveAnimation(0, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(200, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void SAFETYView::STACK_1_End()
{
    BOTTON_stack_1.setVisible(false);
    BOTTON_stack_1.invalidate();

    STACK_1.clearMoveAnimationEndedAction();
    STACK_1.startMoveAnimation(327, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void SAFETYView::STACK_2_Begin()
{
    STACK_2.setVisible(true);
    STACK_2.invalidate();

    BOTTON_stack_2.setVisible(true);
    BOTTON_stack_2.invalidate();

    STACK_2.clearMoveAnimationEndedAction();
    STACK_2.startMoveAnimation(0, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(200, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void SAFETYView::STACK_2_End()
{
    BOTTON_stack_2.setVisible(false);
    BOTTON_stack_2.invalidate();

    STACK_2.clearMoveAnimationEndedAction();
    STACK_2.startMoveAnimation(327, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void SAFETYView::STACK_3_Begin()
{
    STACK_3.setVisible(true);
    STACK_3.invalidate();

    BOTTON_stack_3.setVisible(true);
    BOTTON_stack_3.invalidate();

    STACK_3.clearMoveAnimationEndedAction();
    STACK_3.startMoveAnimation(0, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(200, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void SAFETYView::STACK_3_End()
{
    BOTTON_stack_3.setVisible(false);
    BOTTON_stack_3.invalidate();

    STACK_3.clearMoveAnimationEndedAction();
    STACK_3.startMoveAnimation(327, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void SAFETYView::STACK_4_Begin()
{
    STACK_4.setVisible(true);
    STACK_4.invalidate();

    BOTTON_stack_4.setVisible(true);
    BOTTON_stack_4.invalidate();

    STACK_4.clearMoveAnimationEndedAction();
    STACK_4.startMoveAnimation(0, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(200, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void SAFETYView::STACK_4_End()
{
    BOTTON_stack_4.setVisible(false);
    BOTTON_stack_4.invalidate();

    STACK_4.clearMoveAnimationEndedAction();
    STACK_4.startMoveAnimation(327, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void SAFETYView::STACK_5_Begin()
{
    STACK_5.setVisible(true);
    STACK_5.invalidate();

    BOTTON_stack_5.setVisible(true);
    BOTTON_stack_5.invalidate();

    STACK_5.clearMoveAnimationEndedAction();
    STACK_5.startMoveAnimation(0, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(200, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void SAFETYView::STACK_5_End()
{
    BOTTON_stack_5.setVisible(false);
    BOTTON_stack_5.invalidate();

    STACK_5.clearMoveAnimationEndedAction();
    STACK_5.startMoveAnimation(327, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void SAFETYView::LORA_Begin()
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

void SAFETYView::LORA_End()
{
    BOTTON_lora.setVisible(false);
    BOTTON_lora.invalidate();

    LORA_PopUp.clearMoveAnimationEndedAction();
    LORA_PopUp.startMoveAnimation(230, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}