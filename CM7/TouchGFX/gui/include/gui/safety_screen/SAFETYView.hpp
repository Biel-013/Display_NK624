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
protected:
};

#endif // SAFETYVIEW_HPP
