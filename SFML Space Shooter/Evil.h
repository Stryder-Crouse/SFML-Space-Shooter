#pragma once
#include"Imports.h"
class evils {
public:
	int EDamge;
	int Ehealth;
	int rotateBy;
	float deltaTimeE;
	sf::Vector2f realpostion;
	sf::Vector2f evilshipmov;
	sf::Texture EvilNM;//NM = not moveing mov =moveing S=sheild//sm=small //mm=meduim//lg=large
	sf::Texture EvilMOV;
	sf::Sprite evilShip;
	evils(int EDamgex,int Ehealthx,string EvilNMx,string EvilMOVx, sf::Vector2f position);
	void rotate(int &rotateBy,sf::Sprite player);
	void evilmoves(sf::Sprite ship, sf::Sprite &evilship, sf::Vector2f mouse_float);
	void getDelta(float dt);
};