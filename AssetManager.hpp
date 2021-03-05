#pragma once

#include <map>


#include "SFML-2.5.1\include\SFML\Graphics.hpp"


namespace Haider_Engine {

	class AssetManager
	{
	public:
		AssetManager() {}
		~AssetManager() {}


		void LoadTexture(std::string name, std::string filename);
		sf::Texture &GetTexture(std::string name);

		void LoadFont(std::string name, std::string filename);
		sf::Font &GetFont(std::string name);

	private:

		std::map < std::string, sf::Texture > _textures;
		std::map < std::string, sf::Font > _fonts;



	};




}