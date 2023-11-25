#ifndef SAFETYVIEW_HPP
#define SAFETYVIEW_HPP

#include <gui_generated/safety_screen/SAFETYViewBase.hpp>
#include <gui/safety_screen/SAFETYPresenter.hpp>

class SAFETYView : public SAFETYViewBase
{
public:
    SAFETYView();
    virtual ~SAFETYView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void TransitionBegin_Safety();
    virtual void TransitionEnd_Safety();
    virtual void STACK_1_Begin();
    virtual void STACK_1_End();
    virtual void STACK_2_Begin();
    virtual void STACK_2_End();
    virtual void STACK_3_Begin();
    virtual void STACK_3_End();
    virtual void STACK_4_Begin();
    virtual void STACK_4_End();
    virtual void STACK_5_Begin();
    virtual void STACK_5_End();
    virtual void LORA_Begin();
    virtual void LORA_End();

protected:
};

#endif // SAFETYVIEW_HPP
