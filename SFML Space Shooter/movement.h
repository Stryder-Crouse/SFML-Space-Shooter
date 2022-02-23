#pragma once
#include"Player.h"
class movement {
public:
	//bool arry for dgrees
	bool moveD[360];
	sf::Vector2f mover2;
	movement(float dt);
	float trust=0.03;
	float deltaTimeMP;
	//set bool arry to false
	void insilizeBools(bool moveD[360]);
	void cheakmove(bool moveD[360], sf::Sprite ship);//cheaks were ships is faceing
	void realmove(bool moveD[360],  sf::Vector2f &mover, float trust,  sf::Sprite ship);//moves the ship based on were it is faceing
	void rotateR(sf::Sprite &ship);//rotates right
	void rotateL(sf::Sprite &ship);//rotates left
	void cheakBounds(sf::Sprite &ship, sf::Vector2f &mov);//cheaks if ship is out of bounds
	void getDelta(float dt);
};