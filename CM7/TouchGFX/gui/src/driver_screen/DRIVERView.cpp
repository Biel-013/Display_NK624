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

void DRIVERView::LORA_Begin()
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

void DRIVERView::LORA_End()
{
    BOTTON_lora.setVisible(false);
    BOTTON_lora.invalidate();

    LORA_PopUp.clearMoveAnimationEndedAction();
    LORA_PopUp.startMoveAnimation(230, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}