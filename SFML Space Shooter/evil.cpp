#include "Evil.h"

evils::evils(int EDamgex, int Ehealthx, string EvilNMx, string EvilMOVx, sf::Vector2f position)
{
	EDamge = EDamgex;
	Ehealth = Ehealthx;
	EvilNM.loadFromFile(EvilNMx);//loads texture into file (ship not moveing)
	EvilMOV.loadFromFile(EvilMOVx);//loads texture into file (ship moveing )
	evilShip.setTexture(EvilNM);//sets texter as ships
	evilShip.setOrigin(evilShip.getLocalBounds().width / 2, evilShip.getLocalBounds().height / 2);//set orgin of ship to center
	evilShip.setPosition(position);//sets to center of the window

}

void evils::rotate(int &rotateBy, sf::Sprite player)
{
	// * 180 / 3.14159; convets to radends
	//uses tan to rotate the ship towards the player basic trig LOL
	if (player.getPosition().x - evilShip.getPosition().x <= 0 && player.getPosition().y - evilShip.getPosition().y <= 0) {
		rotateBy =  360-abs(atan((player.getPosition().x - evilShip.getPosition().x) / (player.getPosition().y - evilShip.getPosition().y)) * 180 / 3.14159);
		//cout << rotateBy << endl;
		evilShip.setRotation(rotateBy);
	}
	else if (player.getPosition().x - evilShip.getPosition().x >= 0 && player.getPosition().y - evilShip.getPosition().y <= 0) {
		rotateBy = 0 + abs(atan((player.getPosition().x - evilShip.getPosition().x) / (player.getPosition().y - evilShip.getPosition().y)) * 180 / 3.14159);
		//cout << rotateBy << endl;
		evilShip.setRotation(rotateBy);

	}
	else if (player.getPosition().x - evilShip.getPosition().x <= 0 && player.getPosition().y - evilShip.getPosition().y >= 0) {
		rotateBy = 180 + abs(atan((player.getPosition().x - evilShip.getPosition().x) / (player.getPosition().y - evilShip.getPosition().y)) * 180 / 3.14159);
		//cout << rotateBy << endl;
		evilShip.setRotation(rotateBy);
	}
	else if (player.getPosition().x - evilShip.getPosition().x >= 0 && player.getPosition().y - evilShip.getPosition().y >= 0) {
		rotateBy = 180-abs(atan((player.getPosition().x - evilShip.getPosition().x) / (player.getPosition().y - evilShip.getPosition().y)) * 180 / 3.14159);
		//cout << rotateBy << endl;
			evilShip.setRotation(rotateBy);
	}
	//cout << player.getPosition().x <<" "<< player.getPosition().y <<" player" << endl;
	//cout << evilShip.getPosition().x << " " << evilShip.getPosition().y << " evil" << endl;
}
void evils::evilmoves(sf::Sprite ship, sf::Sprite &evilship, sf::Vector2f mouse_float)
{
	evilshipmov.x += (mouse_float.x - ship.getPosition().x) / 10;//good line of code to think about movement
	evilshipmov.y += (mouse_float.y - ship.getPosition().y) / 10;
	//cout << "this is X  " << movmentB.x << endl;
	//cout << "this is Y  " << movmentB.y << endl;
	//limits speed
	evilshipmov.x = (evilshipmov.x *deltaTimeE );//scales movment based on delta time
	evilshipmov.y = (evilshipmov.y * deltaTimeE );//scales movement based on delta time
	
	evilship.move(evilshipmov);//moves bullet by the amount movmentB
}

void evils::getDelta(float dt)
{
	deltaTimeE = dt;
}
