/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef DRIVERVIEWBASE_HPP
#define DRIVERVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/driver_screen/DRIVERPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/FadeAnimator.hpp>
#include <touchgfx/mixins/ClickListener.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/Gauge.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/containers/progress_indicators/LineProgress.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565Bitmap.hpp>
#include <touchgfx/containers/progress_indicators/TextProgress.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class DRIVERViewBase : public touchgfx::View<DRIVERPresenter>
{
public:
    DRIVERViewBase();
    virtual ~DRIVERViewBase();
    virtual void setupScreen();
    virtual void transitionBegins();
    virtual void handleTickEvent();

    /*
     * Virtual Action Handlers
     */
    virtual void TransitionBegin_Driver()
    {
        // Override and implement this function in DRIVER
    }
    virtual void TransitionEnd_Driver()
    {
        // Override and implement this function in DRIVER
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
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > DEBUG_page;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > SAFETY_page;
    touchgfx::ClickListener< touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > > CONTROL_page;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > DRIVE_page;
    touchgfx::FadeAnimator< touchgfx::Circle > POTENCIMETRO_gauge;
    touchgfx::PainterRGB565 POTENCIMETRO_gaugePainter;
    touchgfx::FadeAnimator< touchgfx::Gauge > VELOCIMETRO_gauge;
    touchgfx::FadeAnimator< touchgfx::Button > POP_Up;
    touchgfx::FadeAnimator< touchgfx::LineProgress > CHARGE_Progress;
    touchgfx::PainterRGB565Bitmap CHARGE_ProgressPainter;
    touchgfx::FadeAnimator< touchgfx::TextProgress > CHARGE_Percent;
    touchgfx::FadeAnimator< touchgfx::Image > INFO_TempMax;
    touchgfx::FadeAnimator< touchgfx::Image > INFO_TensaoMin;
    touchgfx::FadeAnimator< touchgfx::Image > INFO_BrakeBias;
    touchgfx::FadeAnimator< touchgfx::Image > INFO_Torque;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > INFO_Modo;
    touchgfx::FadeAnimator< touchgfx::ButtonWithIcon > INFO_LoRa;
    touchgfx::FadeAnimator< touchgfx::TextArea > brake_bias;
    touchgfx::FadeAnimator< touchgfx::TextArea > tensao_min;
    touchgfx::FadeAnimator< touchgfx::TextArea > temp_max;
    touchgfx::FadeAnimator< touchgfx::TextAreaWithOneWildcard > VELOCIMETRO_digital;
    touchgfx::FadeAnimator< touchgfx::TextArea > torque;
    touchgfx::FadeAnimator< touchgfx::TextArea > hodometro;
    touchgfx::FadeAnimator< touchgfx::Box > FRONTGROUND;

    /*
     * Wildcard Buffers
     */
    static const uint16_t VELOCIMETRO_DIGITAL_SIZE = 5;
    touchgfx::Unicode::UnicodeChar VELOCIMETRO_digitalBuffer[VELOCIMETRO_DIGITAL_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

    /*
     * Callback Declarations
     */
    touchgfx::Callback<DRIVERViewBase, const touchgfx::AbstractProgressIndicator&> gaugeValueSetCallback;
    touchgfx::Callback<DRIVERViewBase, const touchgfx::AbstractProgressIndicator&> gaugeValueUpdatedCallback;
    touchgfx::Callback<DRIVERViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void gaugeValueSetCallbackHandler(const touchgfx::AbstractProgressIndicator& src);
    void gaugeValueUpdatedCallbackHandler(const touchgfx::AbstractProgressIndicator& src);
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Delay Variable Declarations
     */
    static const uint16_t INTERACTION_DELAY_CONTROL_PAGE_DURATION = 15;
    uint16_t interaction_Delay_CONTROL_pageCounter;
    static const uint16_t INTERACTION_DELAY_SAFETY_PAGE_DURATION = 15;
    uint16_t interaction_Delay_SAFETY_pageCounter;
    static const uint16_t INTERACTION_DELAY_DEBUG_PAGE_DURATION = 15;
    uint16_t interaction_Delay_DEBUG_pageCounter;

};

#endif // DRIVERVIEWBASE_HPP
