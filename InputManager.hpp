#pragma once

#include "SFML-2.5.1\include\SFML\Graphics.hpp"

namespace Haider_Engine
{


	class InputManager{

	public:

		InputManager() {}
		~InputManager() {}

		bool IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow& window);


		sf::Vector2i GetMousePosition(sf::RenderWindow &window); // & is a reference rather than a pointer


	};
	 


}