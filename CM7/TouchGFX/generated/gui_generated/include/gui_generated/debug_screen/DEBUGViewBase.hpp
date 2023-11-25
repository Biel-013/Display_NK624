/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef DEBUGVIEWBASE_HPP
#define DEBUGVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/debug_screen/DEBUGPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/FadeAnimator.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class DEBUGViewBase : public touchgfx::View<DEBUGPresenter>
{
public:
    DEBUGViewBase();
    virtual ~DEBUGViewBase();
    virtual void setupScreen();
    virtual void handleTickEvent();
    virtual void transitionBegins();

    /*
     * Virtual Action Handlers
     */
    virtual void TransitionEnd_Debug()
    {
        // Override and implement this function in DEBUG
    }
    virtual void TransitionBegin_Debug()
    {
        // Override and implement this function in DEBUG
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
    touchgfx::Button POP_Up;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > INFO_LoRa;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > INFO_Frenagem;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > INFO_Frenagem_1;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > INFO_Frenagem_2;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > INFO_Frenagem_3;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > INFO_Frenagem_4;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > DEBUG_page;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > SAFETY_page;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > CONTROL_page;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > DRIVE_page;
    touchgfx::Image image1;
    touchgfx::Image image1_1;
    touchgfx::Image image1_2;
    touchgfx::TextArea tensao_max;
    touchgfx::TextArea tensao_max_5;
    touchgfx::TextArea tensao_max_5_1;
    touchgfx::TextArea tensao_max_5_2;
    touchgfx::TextArea tensao_max_1;
    touchgfx::TextArea tensao_max_2;
    touchgfx::TextArea tensao_max_2_1;
    touchgfx::TextArea tensao_max_1_1;
    touchgfx::TextArea tensao_max_3;
    touchgfx::TextArea tensao_max_2_2;
    touchgfx::TextArea tensao_max_1_2;
    touchgfx::TextArea tensao_max_4;
    touchgfx::FadeAnimator< touchgfx::Box > FRONTGROUND;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<DEBUGViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Delay Variable Declarations
     */
    static const uint16_t INTERACTION_DELAY_DRIVER_PAGE_DURATION = 15;
    uint16_t interaction_Delay_DRIVER_pageCounter;
    static const uint16_t INTERACTION_DELAY_CONTROL_PAGE_DURATION = 15;
    uint16_t interaction_Delay_CONTROL_pageCounter;
    static const uint16_t INTERACTION_DELAY_SAFETY_PAGE_DURATION = 15;
    uint16_t interaction_Delay_SAFETY_pageCounter;

};

#endif // DEBUGVIEWBASE_HPP
