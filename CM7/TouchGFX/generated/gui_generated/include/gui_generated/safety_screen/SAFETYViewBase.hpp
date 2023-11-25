/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SAFETYVIEWBASE_HPP
#define SAFETYVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/safety_screen/SAFETYPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/FadeAnimator.hpp>
#include <touchgfx/containers/progress_indicators/TextProgress.hpp>
#include <touchgfx/containers/progress_indicators/LineProgress.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565Bitmap.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/VideoWidget.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <gui/containers/STACK_5_PopUp.hpp>
#include <touchgfx/mixins/MoveAnimator.hpp>
#include <gui/containers/STACK_4_PopUp.hpp>
#include <gui/containers/STACK_3_PopUp.hpp>
#include <gui/containers/STACK_2_PopUp.hpp>
#include <gui/containers/STACK_1_PopUp.hpp>
#include <gui/containers/LoRA_PopUp.hpp>

class SAFETYViewBase : public touchgfx::View<SAFETYPresenter>
{
public:
    SAFETYViewBase();
    virtual ~SAFETYViewBase();
    virtual void setupScreen();
    virtual void handleTickEvent();
    virtual void transitionBegins();

    /*
     * Virtual Action Handlers
     */
    virtual void TransitionEnd_Safety()
    {
        // Override and implement this function in SAFETY
    }
    virtual void TransitionBegin_Safety()
    {
        // Override and implement this function in SAFETY
    }
    virtual void STACK_1_Begin()
    {
        // Override and implement this function in SAFETY
    }
    virtual void STACK_1_End()
    {
        // Override and implement this function in SAFETY
    }
    virtual void STACK_2_Begin()
    {
        // Override and implement this function in SAFETY
    }
    virtual void STACK_2_End()
    {
        // Override and implement this function in SAFETY
    }
    virtual void STACK_3_Begin()
    {
        // Override and implement this function in SAFETY
    }
    virtual void STACK_3_End()
    {
        // Override and implement this function in SAFETY
    }
    virtual void STACK_4_Begin()
    {
        // Override and implement this function in SAFETY
    }
    virtual void STACK_4_End()
    {
        // Override and implement this function in SAFETY
    }
    virtual void STACK_5_Begin()
    {
        // Override and implement this function in SAFETY
    }
    virtual void STACK_5_End()
    {
        // Override and implement this function in SAFETY
    }
    virtual void LORA_Begin()
    {
        // Override and implement this function in SAFETY
    }
    virtual void LORA_End()
    {
        // Override and implement this function in SAFETY
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box BACKGROUND;
    touchgfx::FadeAnimator< touchgfx::Button > POP_Up;
    touchgfx::FadeAnimator< touchgfx::TextProgress > CHARGE_Percent;
    touchgfx::FadeAnimator< touchgfx::LineProgress > CHARGE_Progress;
    touchgfx::PainterRGB565Bitmap CHARGE_ProgressPainter;
    touchgfx::FadeAnimator< touchgfx::Image > INFO_TempMax;
    touchgfx::FadeAnimator< touchgfx::Image > INFO_TensaoMin;
    touchgfx::FadeAnimator< touchgfx::Image > INFO_BrakeBias;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > INFO_Frenagem;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > INFO_Modo;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > INFO_LoRa;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > DEBUG_page;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > SAFETY_page;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > CONTROL_page;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > DRIVE_page;
    touchgfx::VideoWidget SENSOR_4_animated;
    touchgfx::VideoWidget SENSOR_3_animated;
    touchgfx::VideoWidget SENSOR_2_animated;
    touchgfx::VideoWidget SENSOR_1_animated;
    touchgfx::FadeAnimator< touchgfx::Image > SENSOR_4_icon;
    touchgfx::FadeAnimator< touchgfx::Image > SENSOR_3_icon;
    touchgfx::FadeAnimator< touchgfx::Image > SENSOR_2_icon;
    touchgfx::FadeAnimator< touchgfx::Image > SENSOR_1_icon;
    touchgfx::FadeAnimator< touchgfx::Image > ACUMULATOR_background;
    touchgfx::FadeAnimator< touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger >  > STACK_5_widget;
    touchgfx::FadeAnimator< touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger >  > STACK_4_widget;
    touchgfx::FadeAnimator< touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger >  > STACK_3_widget;
    touchgfx::FadeAnimator< touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger >  > STACK_2_widget;
    touchgfx::FadeAnimator< touchgfx::ImageButtonStyle< touchgfx::ClickButtonTrigger >  > STACK_1_widget;
    touchgfx::FadeAnimator< touchgfx::TextArea > temp_max;
    touchgfx::FadeAnimator< touchgfx::TextArea > tensao_max;
    touchgfx::FadeAnimator< touchgfx::TextArea > tensao_min;
    touchgfx::FadeAnimator< touchgfx::TextArea > STACK_5_text;
    touchgfx::FadeAnimator< touchgfx::TextArea > STACK_4_text;
    touchgfx::FadeAnimator< touchgfx::TextArea > STACK_3_text;
    touchgfx::FadeAnimator< touchgfx::TextArea > STACK_2_text;
    touchgfx::FadeAnimator< touchgfx::TextArea > STACK_1_text;
    touchgfx::FadeAnimator< touchgfx::TextArea > SENSOR_4_text;
    touchgfx::FadeAnimator< touchgfx::TextArea > SENSOR_3_text;
    touchgfx::FadeAnimator< touchgfx::TextArea > SENSOR_2_text;
    touchgfx::FadeAnimator< touchgfx::TextArea > SENSOR_1_text;
    touchgfx::FadeAnimator< touchgfx::Box > FRONTGROUND;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  BOTTON_stack_5;
    touchgfx::MoveAnimator< STACK_5_PopUp > STACK_5;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  BOTTON_stack_4;
    touchgfx::MoveAnimator< STACK_4_PopUp > STACK_4;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  BOTTON_stack_3;
    touchgfx::MoveAnimator< STACK_3_PopUp > STACK_3;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  BOTTON_stack_2;
    touchgfx::MoveAnimator< STACK_2_PopUp > STACK_2;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  BOTTON_stack_1;
    touchgfx::MoveAnimator< STACK_1_PopUp > STACK_1;
    touchgfx::MoveAnimator< LoRA_PopUp > LORA_PopUp;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  BOTTON_lora;

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

    /*
     * Callback Declarations
     */
    touchgfx::Callback<SAFETYViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<SAFETYViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

    /*
     * Delay Variable Declarations
     */
    static const uint16_t INTERACTION_DELAY_DRIVER_PAGE_DURATION = 15;
    uint16_t interaction_Delay_DRIVER_pageCounter;
    static const uint16_t INTERACTION_DELAY_CONTROL_PAGE_DURATION = 15;
    uint16_t interaction_Delay_CONTROL_pageCounter;
    static const uint16_t INTERACTION_DELAY_DEBUG_PAGE_DURATION = 15;
    uint16_t interaction_Delay_DEBUG_pageCounter;

};

#endif // SAFETYVIEWBASE_HPP
