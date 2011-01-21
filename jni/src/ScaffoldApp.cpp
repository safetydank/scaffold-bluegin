#include "flx/FlxApp.h"

#include "cinder/gl/gl.h"
#include "bluegin/resourcemanager.h"

#include "flx/flxG.h"
#include "flx/game.h"
#include "flx/state.h"

#include "PlayState.h"

using namespace ci;
using namespace ci::app;
using namespace bluegin;
using namespace flx;

extern FlxGlobal FlxG;

class ScaffoldApp : public FlxApp
{
public:
	void setup()
    {
        Vec2f zoom(1.0f, 1.0f);
        StatePtr initialState = StatePtr(new PlayState());
        mGame = GamePtr(new Game(*this, 
                                 getWindowWidth() / zoom.x, getWindowHeight() / zoom.y, 
                                 initialState, zoom));
        flxSetup(mGame);

        FlxG.resources->primeAllSounds();
        FlxG.defaultFont = FlxG.resources->font("nokia").get();
        gl::clear();
    }
};

CINDER_APP_BASIC( ScaffoldApp, RendererGl )

