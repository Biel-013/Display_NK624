#include <gui/control_screen/CONTROLView.hpp>

extern bool bottom_state;
#define TIME_TRANSITION 15U
bool CONTROL_page_Interlock = false;

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

    INCLINACAO_CAR_gauge.updateValue(0, 4 * TIME_TRANSITION);
    INCLINACAO_VOL_gauge.updateValue(0, 4 * TIME_TRANSITION);

    CONTROL_page_Interlock = true;
}

void CONTROLView::LORA_Begin()
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

void CONTROLView::LORA_End()
{
    BOTTON_lora.setVisible(false);
    BOTTON_lora.invalidate();

    LORA_PopUp.clearMoveAnimationEndedAction();
    LORA_PopUp.startMoveAnimation(480, 0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    FRONTGROUND.clearFadeAnimationEndedAction();
    FRONTGROUND.startFadeAnimation(0, TIME_TRANSITION, touchgfx::EasingEquations::linearEaseIn);
}

void CONTROLView::updateTick(void)
{
#ifndef SIMULATOR
    INCLINACAO_VOL_gauge.invalidateContent();
    if (bottom_state && !CONTROL_page_Interlock)
    		application().gotoSAFETYScreenNoTransition();
    	else if (!bottom_state)
    		CONTROL_page_Interlock = false;
#endif
}
