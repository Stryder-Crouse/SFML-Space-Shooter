#include"Player.h"
play::play(int Health, int Damage, int Sheald, sf::Vector2f position, std::string shiptextureFileLoc0, std::string shiptextureFileLoc1, std::string shiptextureFileLoc2, std::string shiptextureFileLoc3) {
	this->Health = Health;
	this->Damage = Damage;	//this->name=name allow for the class to have the same varable names when it conscuts look at player conructor (no head for local varables to be called someting diffrent)
	this->Sheald = Sheald;
	shipNM.loadFromFile(shiptextureFileLoc0);//loads texture into file (ship not moveing)
	shipMOV.loadFromFile(shiptextureFileLoc1);//loads texture into file (ship  moveing)
	shipSNM.loadFromFile(shiptextureFileLoc2);//loads texture into file (ship not moveing sheild)
	shipSMOV.loadFromFile(shiptextureFileLoc3);//loads texture into file (ship moveing sheild)
	playerShip.setTexture(shipSNM);//sets texter as ships
	playerShip.setOrigin(playerShip.getLocalBounds().width / 2, playerShip.getLocalBounds().height / 2);//set orgin of ship to center
	playerShip.setPosition(position);//sets to center of the window

}