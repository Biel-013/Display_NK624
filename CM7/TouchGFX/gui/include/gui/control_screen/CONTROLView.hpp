#ifndef CONTROLVIEW_HPP
#define CONTROLVIEW_HPP

#include <gui_generated/control_screen/CONTROLViewBase.hpp>
#include <gui/control_screen/CONTROLPresenter.hpp>

class CONTROLView : public CONTROLViewBase
{
public:
    CONTROLView();
    virtual ~CONTROLView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void TransitionBegin_Control();
     virtual void TransitionEnd_Control();
     virtual void LORA_Begin();
    virtual void LORA_End();
protected:
};

#endif // CONTROLVIEW_HPP
