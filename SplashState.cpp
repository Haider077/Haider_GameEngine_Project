#include <sstream>
#include <iostream>

#include "SplashState.hpp"
#include "DEFINITIONS.hpp"

namespace Haider_Engine {

	SplashState::SplashState(GameDataRef data) : _data(data) {
	
	}
	void SplashState::Init() {
		this->_data->assets.LoadTexture("Splash State Background", SPLASH_SCENE_BACKGROUND_FILEPATH );
		_background.setTexture(this->_data.assets.getTexture("Splash State Background"));


	}


}