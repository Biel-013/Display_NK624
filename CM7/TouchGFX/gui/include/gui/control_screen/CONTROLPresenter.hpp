#ifndef CONTROLPRESENTER_HPP
#define CONTROLPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class CONTROLView;

class CONTROLPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    CONTROLPresenter(CONTROLView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~CONTROLPresenter() {}

private:
    CONTROLPresenter();

    CONTROLView& view;
};

#endif // CONTROLPRESENTER_HPP
