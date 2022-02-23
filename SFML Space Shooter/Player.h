#pragma once
#include"Imports.h"
class play {
public:
	int Health ;
	int Damage ;
	int Sheald ;
	play(int Health,int Damage,int Sheald,sf::Vector2f position, std::string shiptextureFileLoc0, std::string shiptextureFileLoc1, std::string shiptextureFileLoc2, std::string shiptextureFileLoc3);
	sf::Texture shipNM;//NM = not moveing mov =moveing S=sheild
	sf::Texture shipMOV;
	sf::Texture shipSNM;
	sf::Texture shipSMOV;
	sf::Sprite playerShip;
};