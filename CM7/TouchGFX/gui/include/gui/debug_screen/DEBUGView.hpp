#ifndef DEBUGVIEW_HPP
#define DEBUGVIEW_HPP

#include <gui_generated/debug_screen/DEBUGViewBase.hpp>
#include <gui/debug_screen/DEBUGPresenter.hpp>

class DEBUGView : public DEBUGViewBase
{
public:
    DEBUGView();
    virtual ~DEBUGView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void TransitionBegin_Debug();
    virtual void TransitionEnd_Debug();
    virtual void LORA_Begin();
    virtual void LORA_End();
protected:
};

#endif // DEBUGVIEW_HPP
