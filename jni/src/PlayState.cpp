#include "bluegin/resourcemanager.h"

#include "flx/flx.h"
#include "flx/flxG.h"
#include "flx/text.h"

#include "PlayState.h"

using namespace ci;
using namespace bluegin;
using namespace flx;

extern FlxGlobal FlxG;

void PlayState::create()
{
    ResourceManager& res = *(FlxG.resources);

    FlxG.score = 0;
    bgColor = FlxU::color(0x000000);

    TextPtr text = Text::create(0, 0, FlxG.width, "Hello world!");
    text->setSize(30.0f);
    text->setAlignment(ALIGN_CENTER);
    add(text);

    FlxG.flash.start(FlxU::color(0xFFFF0000));
}

void PlayState::update()
{
    State::update();
}


