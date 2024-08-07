#include <gui/debug_screen/DEBUGView.hpp>

extern bool bottom_state;
#define TIME_TRANSITION 15U
bool DEBUG_page_Interlock = false;

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

    DEBUG_page_Interlock = true;
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
    LORA_PopUp.startMoveAnimation(85, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(200, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void DEBUGView::LORA_End()
{
    BOTTON_lora.setVisible(false);
    BOTTON_lora.invalidate();

    LORA_PopUp.clearMoveAnimationEndedAction();
    LORA_PopUp.startMoveAnimation(480, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void DEBUGView::updateTick(void)
{
#ifndef SIMULATOR
	if (bottom_state && !DEBUG_page_Interlock)
			application().gotoDRIVERScreenNoTransition();
		else if (!bottom_state)
			DEBUG_page_Interlock = false;
#endif
}
