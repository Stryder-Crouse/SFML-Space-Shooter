#pragma once
#include"imports.h"
class back{
public:
	//background texture
	sf::Texture space;
	
	//background sprite
	sf::Sprite background;
	back();
	back(sf::Vector2f position, std::string texFileLoc);
};