/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/safety_screen/SAFETYViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <videos/VideoDatabase.hpp>

SAFETYViewBase::SAFETYViewBase() :
    buttonCallback(this, &SAFETYViewBase::buttonCallbackHandler),
    flexButtonCallback(this, &SAFETYViewBase::flexButtonCallbackHandler),
    interaction_Delay_DRIVER_pageCounter(0),
    interaction_Delay_CONTROL_pageCounter(0),
    interaction_Delay_DEBUG_pageCounter(0)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    BACKGROUND.setPosition(0, 0, 480, 272);
    BACKGROUND.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(BACKGROUND);

    POP_Up.setXY(274, 232);
    POP_Up.setBitmaps(touchgfx::Bitmap(BITMAP_POP_TESLA_ID), touchgfx::Bitmap(BITMAP_ALERTA_INV_9_ID));
    add(POP_Up);

    CHARGE_Percent.setXY(308, 0);
    CHARGE_Percent.setProgressIndicatorPosition(0, 10, 68, 40);
    CHARGE_Percent.setRange(0, 100);
    CHARGE_Percent.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    CHARGE_Percent.setTypedText(touchgfx::TypedText(T___SINGLEUSE_TUNC));
    CHARGE_Percent.setBackground(touchgfx::Bitmap(BITMAP_PERCENTAGE_BACKGROUND_ID));
    CHARGE_Percent.setValue(30);
    add(CHARGE_Percent);

    CHARGE_Progress.setXY(369, -3);
    CHARGE_Progress.setProgressIndicatorPosition(0, 0, 51, 233);
    CHARGE_Progress.setRange(0, 100);
    CHARGE_Progress.setBackground(touchgfx::Bitmap(BITMAP_CHARGE_PROGRESS_ID));
    CHARGE_ProgressPainter.setBitmap(touchgfx::Bitmap(BITMAP_CHARGE_BACKGROUND_BLACK_ID));
    CHARGE_Progress.setPainter(CHARGE_ProgressPainter);
    CHARGE_Progress.setStart(25.5f, 0.0f);
    CHARGE_Progress.setEnd(25.5f, 233.0f);
    CHARGE_Progress.setLineWidth(51);
    CHARGE_Progress.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);
    CHARGE_Progress.setValue(0);
    add(CHARGE_Progress);

    INFO_TempMax.setXY(416, 189);
    INFO_TempMax.setBitmap(touchgfx::Bitmap(BITMAP_TEMP_MAX_TAB_OFF_ID));
    add(INFO_TempMax);

    INFO_TensaoMin.setXY(416, 153);
    INFO_TensaoMin.setBitmap(touchgfx::Bitmap(BITMAP_TENSAO_MIN_TAB_OFF_ID));
    add(INFO_TensaoMin);

    INFO_BrakeBias.setXY(415, 114);
    INFO_BrakeBias.setBitmap(touchgfx::Bitmap(BITMAP_TENSAO_MAX_TAB_OFF_ID));
    add(INFO_BrakeBias);

    INFO_Frenagem.setXY(415, 75);
    INFO_Frenagem.setBitmaps(touchgfx::Bitmap(BITMAP_AIR_TAB_OFF_ID), touchgfx::Bitmap(BITMAP_AIR_TAB_OFF_ID), touchgfx::Bitmap(BITMAP_SWITCH_ON_ID), touchgfx::Bitmap(BITMAP_SWITCH_OFF_ID));
    INFO_Frenagem.setIconXY(11, 2);
    add(INFO_Frenagem);

    INFO_Modo.setXY(415, 37);
    INFO_Modo.setBitmaps(touchgfx::Bitmap(BITMAP_MODO_TAB_OFF_ID), touchgfx::Bitmap(BITMAP_MODO_TAB_OFF_ID), touchgfx::Bitmap(BITMAP_SKIDPAD_SIMBOL_ID), touchgfx::Bitmap(BITMAP_ENDURO_SIMBOL_ID));
    INFO_Modo.setIconXY(12, 3);
    add(INFO_Modo);

    INFO_LoRa.setXY(415, 0);
    INFO_LoRa.setBitmaps(touchgfx::Bitmap(BITMAP_LORA_TAB_OFF_ID), touchgfx::Bitmap(BITMAP_LORA_TAB_OFF_ID), touchgfx::Bitmap(BITMAP_LORA_ON_ID), touchgfx::Bitmap(BITMAP_LORA_OFF_ID));
    INFO_LoRa.setIconXY(14, 1);
    add(INFO_LoRa);

    DEBUG_page.setXY(0, 203);
    DEBUG_page.setBitmaps(touchgfx::Bitmap(BITMAP_BOTTOM_OFF_UNSELECT_ID), touchgfx::Bitmap(BITMAP_BOTTOM_ON_UNSELECT_ID), touchgfx::Bitmap(BITMAP_DEBUG_OFF_ID), touchgfx::Bitmap(BITMAP_DEBUG_ON_ID));
    DEBUG_page.setIconXY(0, 13);
    DEBUG_page.setAction(buttonCallback);
    add(DEBUG_page);

    SAFETY_page.setXY(0, 134);
    SAFETY_page.setBitmaps(touchgfx::Bitmap(BITMAP_MID_BOTTOM_ON_SELECT_ID), touchgfx::Bitmap(BITMAP_MID_BOTTOM_OFF_SELECT_ID), touchgfx::Bitmap(BITMAP_SAFETY_ON_ID), touchgfx::Bitmap(BITMAP_SAFETY_OFF_ID));
    SAFETY_page.setIconXY(0, 13);
    add(SAFETY_page);

    CONTROL_page.setXY(0, 67);
    CONTROL_page.setBitmaps(touchgfx::Bitmap(BITMAP_MID_TOP_OFF_UNSELECT_ID), touchgfx::Bitmap(BITMAP_MID_TOP_ON_UNSELECT_ID), touchgfx::Bitmap(BITMAP_CONTROL_OFF_ID), touchgfx::Bitmap(BITMAP_CONTROL_ON_ID));
    CONTROL_page.setIconXY(0, 13);
    CONTROL_page.setAction(buttonCallback);
    add(CONTROL_page);

    DRIVE_page.setXY(0, 0);
    DRIVE_page.setBitmaps(touchgfx::Bitmap(BITMAP_TOP_OFF_UNSELECT_ID), touchgfx::Bitmap(BITMAP_TOP_ON_UNSELECT_ID), touchgfx::Bitmap(BITMAP_DRIVE_OFF_ID), touchgfx::Bitmap(BITMAP_DRIVE_ON_ID));
    DRIVE_page.setIconXY(0, 13);
    DRIVE_page.setAction(buttonCallback);
    add(DRIVE_page);

    SENSOR_4_animated.setPosition(238, 179, 70, 48);
    SENSOR_4_animated.setVideoData(video_CURRENT_left_bin_start, video_CURRENT_left_bin_length);
    SENSOR_4_animated.setRepeat(true);
    SENSOR_4_animated.play();
    add(SENSOR_4_animated);

    SENSOR_3_animated.setPosition(262, 123, 70, 48);
    SENSOR_3_animated.setVideoData(video_CURRENT_right_bin_start, video_CURRENT_right_bin_length);
    SENSOR_3_animated.setRepeat(true);
    SENSOR_3_animated.play();
    add(SENSOR_3_animated);

    SENSOR_2_animated.setPosition(262, 68, 70, 48);
    SENSOR_2_animated.setVideoData(video_CURRENT_right_bin_start, video_CURRENT_right_bin_length);
    SENSOR_2_animated.setRepeat(true);
    SENSOR_2_animated.play();
    add(SENSOR_2_animated);

    SENSOR_1_animated.setPosition(238, 14, 70, 48);
    SENSOR_1_animated.setVideoData(video_CURRENT_left_bin_start, video_CURRENT_left_bin_length);
    SENSOR_1_animated.setRepeat(true);
    SENSOR_1_animated.play();
    add(SENSOR_1_animated);

    SENSOR_4_icon.setXY(243, 183);
    SENSOR_4_icon.setBitmap(touchgfx::Bitmap(BITMAP_CURRENT_4_BACKGROUND_ID));
    add(SENSOR_4_icon);

    SENSOR_3_icon.setXY(268, 127);
    SENSOR_3_icon.setBitmap(touchgfx::Bitmap(BITMAP_CURRENT_1_BACKGROUND_ID));
    add(SENSOR_3_icon);

    SENSOR_2_icon.setXY(268, 72);
    SENSOR_2_icon.setBitmap(touchgfx::Bitmap(BITMAP_CURRENT_2_BACKGROUND_ID));
    add(SENSOR_2_icon);

    SENSOR_1_icon.setXY(243, 18);
    SENSOR_1_icon.setBitmap(touchgfx::Bitmap(BITMAP_CURRENT_3_BACKGROUND_ID));
    add(SENSOR_1_icon);

    ACUMULATOR_background.setXY(82, 25);
    ACUMULATOR_background.setBitmap(touchgfx::Bitmap(BITMAP_ACUMULATOR_BACKGROUND_ID));
    add(ACUMULATOR_background);

    STACK_5_widget.setBitmaps(Bitmap(BITMAP_STACK_5_ICON_ID), Bitmap(BITMAP_STACK_5_ICON_ID));
    STACK_5_widget.setBitmapXY(0, 0);
    STACK_5_widget.setPosition(170, 127, 73, 58);
    add(STACK_5_widget);

    STACK_4_widget.setBitmaps(Bitmap(BITMAP_STACK_4_ICON_ID), Bitmap(BITMAP_STACK_4_ICON_ID));
    STACK_4_widget.setBitmapXY(0, 0);
    STACK_4_widget.setPosition(170, 48, 73, 58);
    add(STACK_4_widget);

    STACK_3_widget.setBitmaps(Bitmap(BITMAP_STACK_3_ICON_ID), Bitmap(BITMAP_STACK_3_ICON_ID));
    STACK_3_widget.setBitmapXY(0, 0);
    STACK_3_widget.setPosition(82, 156, 73, 58);
    add(STACK_3_widget);

    STACK_2_widget.setBitmaps(Bitmap(BITMAP_STACK_2_ICON_ID), Bitmap(BITMAP_STACK_2_ICON_ID));
    STACK_2_widget.setBitmapXY(0, 0);
    STACK_2_widget.setPosition(92, 86, 73, 58);
    add(STACK_2_widget);

    STACK_1_widget.setBitmaps(Bitmap(BITMAP_STACK_1_ICON_ID), Bitmap(BITMAP_STACK_1_ICON_ID));
    STACK_1_widget.setBitmapXY(0, 0);
    STACK_1_widget.setAction(flexButtonCallback);
    STACK_1_widget.setPosition(82, 16, 73, 58);
    add(STACK_1_widget);

    temp_max.setXY(431, 206);
    temp_max.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    temp_max.setLinespacing(0);
    temp_max.setTypedText(touchgfx::TypedText(T___SINGLEUSE_EYDG));
    add(temp_max);

    tensao_max.setXY(427, 129);
    tensao_max.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    tensao_max.setLinespacing(0);
    tensao_max.setTypedText(touchgfx::TypedText(T___SINGLEUSE_BLM9));
    add(tensao_max);

    tensao_min.setXY(429, 168);
    tensao_min.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    tensao_min.setLinespacing(0);
    tensao_min.setTypedText(touchgfx::TypedText(T___SINGLEUSE_MZQS));
    add(tensao_min);

    STACK_5_text.setPosition(183, 151, 48, 15);
    STACK_5_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    STACK_5_text.setLinespacing(0);
    STACK_5_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ZCMW));
    add(STACK_5_text);

    STACK_4_text.setPosition(183, 73, 48, 15);
    STACK_4_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    STACK_4_text.setLinespacing(0);
    STACK_4_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_BVMV));
    add(STACK_4_text);

    STACK_3_text.setPosition(96, 180, 48, 15);
    STACK_3_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    STACK_3_text.setLinespacing(0);
    STACK_3_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CQUD));
    add(STACK_3_text);

    STACK_2_text.setPosition(105, 111, 48, 15);
    STACK_2_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    STACK_2_text.setLinespacing(0);
    STACK_2_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6AAQ));
    add(STACK_2_text);

    STACK_1_text.setPosition(95, 41, 48, 15);
    STACK_1_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    STACK_1_text.setLinespacing(0);
    STACK_1_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_A1MF));
    add(STACK_1_text);

    SENSOR_4_text.setPosition(254, 199, 42, 15);
    SENSOR_4_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    SENSOR_4_text.setLinespacing(0);
    SENSOR_4_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_EP5M));
    add(SENSOR_4_text);

    SENSOR_3_text.setPosition(278, 143, 42, 15);
    SENSOR_3_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    SENSOR_3_text.setLinespacing(0);
    SENSOR_3_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_M8NZ));
    add(SENSOR_3_text);

    SENSOR_2_text.setPosition(278, 88, 42, 15);
    SENSOR_2_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    SENSOR_2_text.setLinespacing(0);
    SENSOR_2_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_XKB0));
    add(SENSOR_2_text);

    SENSOR_1_text.setPosition(253, 34, 42, 15);
    SENSOR_1_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    SENSOR_1_text.setLinespacing(0);
    SENSOR_1_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_IWRT));
    add(SENSOR_1_text);

    FRONTGROUND.setPosition(80, 0, 400, 272);
    FRONTGROUND.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    FRONTGROUND.setVisible(false);
    add(FRONTGROUND);

    STACK_1.setXY(327, 0);
    STACK_1.setVisible(false);
    add(STACK_1);

    BOTOM_stack_1.setBoxWithBorderPosition(0, 0, 480, 272);
    BOTOM_stack_1.setBorderSize(5);
    BOTOM_stack_1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    BOTOM_stack_1.setAlpha(0);
    BOTOM_stack_1.setVisible(false);
    BOTOM_stack_1.setAction(flexButtonCallback);
    BOTOM_stack_1.setPosition(0, 0, 480, 272);
    add(BOTOM_stack_1);
}

SAFETYViewBase::~SAFETYViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void SAFETYViewBase::setupScreen()
{
    STACK_1.initialize();
    transitionBegins();
}

void SAFETYViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &DRIVE_page)
    {
        //Interaction_DRIVER_page_press
        //When DRIVE_page clicked call virtual function
        //Call TransitionEnd_Safety
        TransitionEnd_Safety();
    
        //Interaction_Delay_DRIVER_page
        //When Interaction_DRIVER_page_press completed delay
        //Delay for 251 ms (15 Ticks)
        interaction_Delay_DRIVER_pageCounter = INTERACTION_DELAY_DRIVER_PAGE_DURATION;
    }
    if (&src == &CONTROL_page)
    {
        //Interaction_CONTROL_page_press
        //When CONTROL_page clicked call virtual function
        //Call TransitionEnd_Safety
        TransitionEnd_Safety();
    
        //Interaction_Delay_CONTROL_page
        //When Interaction_CONTROL_page_press completed delay
        //Delay for 251 ms (15 Ticks)
        interaction_Delay_CONTROL_pageCounter = INTERACTION_DELAY_CONTROL_PAGE_DURATION;
    }
    if (&src == &DEBUG_page)
    {
        //Interaction_DEBUG_page_press
        //When DEBUG_page clicked call virtual function
        //Call TransitionEnd_Safety
        TransitionEnd_Safety();
    
        //Interaction_Delay_DEBUG_page
        //When Interaction_DEBUG_page_press completed delay
        //Delay for 251 ms (15 Ticks)
        interaction_Delay_DEBUG_pageCounter = INTERACTION_DELAY_DEBUG_PAGE_DURATION;
    }
}

void SAFETYViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &STACK_1_widget)
    {
        //Interaction_STACK_1_show
        //When STACK_1_widget clicked show STACK_1
        //Show STACK_1
        STACK_1.setVisible(true);
        STACK_1.invalidate();
        //Interaction_Botom_STACK_1_show
        //When STACK_1_widget clicked show BOTOM_stack_1
        //Show BOTOM_stack_1
        BOTOM_stack_1.setVisible(true);
        BOTOM_stack_1.invalidate();
        //Interaction2
        //When STACK_1_widget clicked move STACK_1
        //Move STACK_1 to x:0, y:0 with LinearIn easing in 250 ms (15 Ticks)
        STACK_1.clearMoveAnimationEndedAction();
        STACK_1.startMoveAnimation(0, 0, 15, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    }
    if (&src == &BOTOM_stack_1)
    {
        //Interaction_Botom_STACK_1_hide
        //When BOTOM_stack_1 clicked hide BOTOM_stack_1
        //Hide BOTOM_stack_1
        BOTOM_stack_1.setVisible(false);
        BOTOM_stack_1.invalidate();
        //Interaction1
        //When BOTOM_stack_1 clicked move STACK_1
        //Move STACK_1 to x:327, y:0 with LinearIn easing in 250 ms (15 Ticks)
        STACK_1.clearMoveAnimationEndedAction();
        STACK_1.startMoveAnimation(327, 0, 15, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
    }
}

void SAFETYViewBase::handleTickEvent()
{
    if (interaction_Delay_DRIVER_pageCounter > 0)
    {
        interaction_Delay_DRIVER_pageCounter--;
        if (interaction_Delay_DRIVER_pageCounter == 0)
        {
                //Interaction_Screen_DRIVER_page
                //When Interaction_Delay_DRIVER_page completed change screen to DRIVER
                //Go to DRIVER with no screen transition
                application().gotoDRIVERScreenNoTransition();
        }
    }

    if (interaction_Delay_CONTROL_pageCounter > 0)
    {
        interaction_Delay_CONTROL_pageCounter--;
        if (interaction_Delay_CONTROL_pageCounter == 0)
        {
                //Interaction_Screen_CONTROL_page
                //When Interaction_Delay_CONTROL_page completed change screen to CONTROL
                //Go to CONTROL with no screen transition
                application().gotoCONTROLScreenNoTransition();
        }
    }

    if (interaction_Delay_DEBUG_pageCounter > 0)
    {
        interaction_Delay_DEBUG_pageCounter--;
        if (interaction_Delay_DEBUG_pageCounter == 0)
        {
                //Interaction_Screen_DEBUG_page
                //When Interaction_Delay_DEBUG_page completed change screen to DEBUG
                //Go to DEBUG with no screen transition
                application().gotoDEBUGScreenNoTransition();
        }
    }
}

void SAFETYViewBase::transitionBegins()
{
    //Interaction_TransitionBegin
    //When screen transition begins call virtual function
    //Call TransitionBegin_Safety
    TransitionBegin_Safety();
}