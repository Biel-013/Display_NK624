#ifndef DRIVERVIEW_HPP
#define DRIVERVIEW_HPP

#include <gui_generated/driver_screen/DRIVERViewBase.hpp>
#include <gui/driver_screen/DRIVERPresenter.hpp>

class DRIVERView : public DRIVERViewBase
{
public:
    DRIVERView();
    virtual ~DRIVERView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void TransitionBegin_Driver();
    virtual void TransitionEnd_Driver();
    virtual void LORA_Begin();
    virtual void LORA_End();
protected:
};

#endif // DRIVERVIEW_HPP
