#pragma once
#include"Imports.h"
class bullets {
public:
	float deltaTimeB;//may need to update this with a get function if frame rate drops
	int damgeB;
	//bool spawned = false;
	sf::Texture bulletSize;
	sf::Sprite bullet ;
	sf::Vector2f weremove;
	sf::Vector2f movmentB;
	sf::Vector2f mouseinput;//used for bullet spific mouse cornates
	sf::Vector2f shipinput;
	bullets(int damagex, string bullettx, sf::Sprite ship,  sf::Vector2f movment, sf::Vector2f mouseinput,float dt);
	void ifBulletHits(sf::Sprite ship, sf::Sprite bullet);
	void Bulletmoves(sf::Sprite ship, sf::Sprite &bullet,sf::Vector2f &movmentB, sf::Vector2f mouse_float);
	void Bulletmovesevil(sf::Vector2f weremove, sf::Sprite &bullet, sf::Vector2f &movmentB, sf::Vector2f mouse_float);
	void getWere(sf::Sprite ship);
	bool isDistroyed(sf::Sprite &bullet, int & shipshealth, int & shipsheild, sf::Sprite & ship);//cheaks if out of bounds
	bool isOut(sf::Sprite &bullet);
	//void hits(sf::Sprite &bullet, int &shipshealth, int &shipsheild, sf::Sprite &ship);//cheaks if out of bounds and colltion
};