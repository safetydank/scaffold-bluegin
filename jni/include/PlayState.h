#pragma once

#include "flx/state.h"
#include "flx/emitter.h"
#include "flx/button.h"

class PlayState : public flx::State
{
public:
    virtual void create();
    virtual void update();
};


