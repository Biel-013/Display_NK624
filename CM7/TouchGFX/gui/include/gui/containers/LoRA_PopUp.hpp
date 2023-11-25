#ifndef LORA_POPUP_HPP
#define LORA_POPUP_HPP

#include <gui_generated/containers/LoRA_PopUpBase.hpp>

class LoRA_PopUp : public LoRA_PopUpBase
{
public:
    LoRA_PopUp();
    virtual ~LoRA_PopUp() {}

    virtual void initialize();
protected:
};

#endif // LORA_POPUP_HPP
