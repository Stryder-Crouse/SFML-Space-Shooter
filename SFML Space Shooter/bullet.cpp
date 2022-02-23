#include "bullet.h"

bullets::bullets(int damagex, string bullettx,sf::Sprite ship, sf::Vector2f movment, sf::Vector2f mouseinput,float dt)//spaens bullet
{
	damgeB = damagex;
	bulletSize.loadFromFile(bullettx);
	bullet.setTexture(bulletSize);
	bullet.setPosition(ship.getPosition());
	bullet.setOrigin(bullet.getLocalBounds().width/2,bullet.getLocalBounds().height/2);
	bullet.setRotation(ship.getRotation());
	movmentB = movment;
	weremove = ship.getPosition();//gets it own spawn location and stores it to allow it to have diffrent starting point from other bullets(dealting this line would cause all the bullets to go in the same direction)
	deltaTimeB = dt;//sets delta time
}

void bullets::ifBulletHits(sf::Sprite ship, sf::Sprite bullet)
{
}

void bullets::Bulletmoves(sf::Sprite ship, sf::Sprite &bullet,sf::Vector2f &movmentB,  sf::Vector2f mouse_float)
{ 
	//old move code
	/*
		if (bullet.getRotation() == 0) {//goes up
			movmentB.y -= sin(0) ;
		}
		if (bullet.getRotation() >= 2 && bullet.getRotation() <= 44) {
			movmentB.x += abs(cos(bullet.getRotation()) );
			movmentB.y -= abs(sin(bullet.getRotation()) );
		}
		if (bullet.getRotation() == 45) {//goes right and up 
			movmentB.x += cos(45);
			movmentB.y -= sin(45) ;
		}
		if (bullet.getRotation() >= 46 && bullet.getRotation() <= 69) {
			movmentB.x += abs(cos(bullet.getRotation()));
			movmentB.y -= abs(sin(bullet.getRotation()) );
		}
		if (bullet.getRotation() >= 70 && bullet.getRotation() <= 86) {
			movmentB.x += abs(cos(bullet.getRotation()) );
			movmentB.y -= abs(sin(bullet.getRotation()) );
		}
		if (bullet.getRotation() >= 86 && bullet.getRotation() <= 89 && bullet.getRotation() != 90) {
			movmentB.x += abs(cos(bullet.getRotation()));
		}
		if (bullet.getRotation() == 90) { movmentB.x += 0; }//goes right
		if (bullet.getRotation() >= 91 && bullet.getRotation() <= 99) {
			movmentB.x += abs(cos(bullet.getRotation()));
			movmentB.y += abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() >= 99 && bullet.getRotation() <= 124) {
			movmentB.x += abs(cos(bullet.getRotation()));
			movmentB.y += abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() >= 125 && bullet.getRotation() <= 131) {
			movmentB.x += abs(cos(bullet.getRotation()));
			movmentB.y += abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() >= 132 && bullet.getRotation() <= 137) {//goes right and down
			movmentB.x += 0; movmentB.y = movmentB.x;
		}
		if (bullet.getRotation() >= 138 && bullet.getRotation() <= 159) {
			movmentB.x += abs(cos(159));
			movmentB.y += abs(sin(159));
		}
		if (bullet.getRotation() >= 160 && bullet.getRotation() <= 170) {
			movmentB.x += abs(cos(bullet.getRotation()));
			movmentB.y += abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() == 171 || bullet.getRotation() == 172) {
			movmentB.x += abs(cos(bullet.getRotation()));
			movmentB.y += abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() >= 173 && bullet.getRotation() <= 177) {
			movmentB.x += abs(cos(bullet.getRotation()));
			movmentB.y += abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() >= 178 && bullet.getRotation() <= 183) {//goes down
			movmentB.y += 0;
		}
		if (bullet.getRotation() >= 184 && bullet.getRotation() <= 190) {
			movmentB.x -= abs(cos(bullet.getRotation()));
			movmentB.y += abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() >= 191 && bullet.getRotation() <= 199) {
			movmentB.x -= abs(cos(bullet.getRotation()));
			movmentB.y += abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() >= 200 && bullet.getRotation() <= 222) {
			movmentB.x -= abs(cos(bullet.getRotation()));
			movmentB.y += abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() >= 223 && bullet.getRotation() <= 227) {//goes left and down
			movmentB.x -= cos(45);
			movmentB.y += sin(45);
		}
		if (bullet.getRotation() >= 228 && bullet.getRotation() <= 238) {
			movmentB.x -= abs(cos(bullet.getRotation()));
			movmentB.y += abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() >= 239 && bullet.getRotation() <= 253) {
			movmentB.x -= abs(cos(bullet.getRotation()));
			movmentB.y += abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() >= 254 && bullet.getRotation() <= 266) {
			movmentB.x -= abs(cos(bullet.getRotation()));
			movmentB.y += abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() >= 267 && bullet.getRotation() <= 272) {//goes left
			movmentB.x -= 0;
		}
		if (bullet.getRotation() >= 273 && bullet.getRotation() <= 286 && bullet.getRotation() != 285) {
			movmentB.x -= abs(cos(bullet.getRotation()));
			movmentB.y -= abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() == 285) {
			movmentB.x -= abs(cos(285));
			movmentB.y -= abs(sin(285) / 100000);//werid could cause glitch
		}
		if (bullet.getRotation() >= 287 && bullet.getRotation() <= 312) {
			movmentB.x -= abs(cos(bullet.getRotation()));
			movmentB.y -= abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() >= 313 && bullet.getRotation() <= 317) {//goes left and up
			movmentB.x -= 0.9; movmentB.y = movmentB.x;
		}
		if (bullet.getRotation() >= 318 && bullet.getRotation() <= 339) {
			movmentB.x -= abs(cos(bullet.getRotation()));
			movmentB.y -= abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() >= 340 && bullet.getRotation() <= 344) {
			movmentB.x -= abs(cos(bullet.getRotation()));
			movmentB.y -= abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() >= 345 && bullet.getRotation() <= 357) {
			movmentB.x -= abs(cos(bullet.getRotation()));
			movmentB.y -= abs(sin(bullet.getRotation()));
		}
		if (bullet.getRotation() == 358 || bullet.getRotation() == 359) {//goes up
			movmentB.y -= abs(sin(0)+0.2);
		}
		*/
//moves bullet base on how far away the mouse is from the player
	movmentB.x += (mouse_float.x - shipinput.x);//good line of code to think about movement
	movmentB.y += (mouse_float.y - shipinput.y);
	
	//cout << "this is X  " << movmentB.x << endl;
	//cout << "this is Y  " << movmentB.y << endl;
		//limits speed
		/*if (movmentB.x > 1) {
			movmentB.x = 1;
		}
		if (movmentB.y > 1) {
			movmentB.y = 1;
		}
		if (movmentB.x < -1) {
			movmentB.x = -1;
		}
		if (movmentB.y < -1) {
			movmentB.y = -1;
		}*/
	//cout << deltaTimeB << endl;
	movmentB.x = (movmentB.x *deltaTimeB*4);//scales movment based on delta time
	movmentB.y = (movmentB.y * deltaTimeB*4);//scales movement based on delta time
	bullet.move(movmentB);//moves bullet by the amount movmentB
}

bool bullets::isDistroyed(sf::Sprite &bullet,  int & shipshealth, int & shipsheild, sf::Sprite & ship)
{
	//cheaks if bullet sprite hit ship and retuens true if it does
	
	if (bullet.getGlobalBounds().intersects(ship.getGlobalBounds())) {
		if (shipsheild>0) {
			shipsheild -= damgeB;
		}
		else if (shipshealth>0) {
			shipshealth -= damgeB;
		}
		return true;
	}
}

bool bullets::isOut(sf::Sprite & bullet)
{
	if (bullet.getPosition().x >= 1200) {
		return true;
	}
	else if (bullet.getPosition().x <= 0) {
		return true;
	}
	if (bullet.getPosition().y >= 986) {
		return true;
	}
	else if (bullet.getPosition().y <= 0) {
		return true;
	}
}

void bullets::Bulletmovesevil( sf::Vector2f weremove, sf::Sprite &bullet, sf::Vector2f &movmentB, sf::Vector2f mouse_float)
{
	//old move code
	/*
	if (bullet.getRotation() == 0) {//goes up
	movmentB.y -= sin(0) ;
	}
	if (bullet.getRotation() >= 2 && bullet.getRotation() <= 44) {
	movmentB.x += abs(cos(bullet.getRotation()) );
	movmentB.y -= abs(sin(bullet.getRotation()) );
	}
	if (bullet.getRotation() == 45) {//goes right and up
	movmentB.x += cos(45);
	movmentB.y -= sin(45) ;
	}
	if (bullet.getRotation() >= 46 && bullet.getRotation() <= 69) {
	movmentB.x += abs(cos(bullet.getRotation()));
	movmentB.y -= abs(sin(bullet.getRotation()) );
	}
	if (bullet.getRotation() >= 70 && bullet.getRotation() <= 86) {
	movmentB.x += abs(cos(bullet.getRotation()) );
	movmentB.y -= abs(sin(bullet.getRotation()) );
	}
	if (bullet.getRotation() >= 86 && bullet.getRotation() <= 89 && bullet.getRotation() != 90) {
	movmentB.x += abs(cos(bullet.getRotation()));
	}
	if (bullet.getRotation() == 90) { movmentB.x += 0; }//goes right
	if (bullet.getRotation() >= 91 && bullet.getRotation() <= 99) {
	movmentB.x += abs(cos(bullet.getRotation()));
	movmentB.y += abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() >= 99 && bullet.getRotation() <= 124) {
	movmentB.x += abs(cos(bullet.getRotation()));
	movmentB.y += abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() >= 125 && bullet.getRotation() <= 131) {
	movmentB.x += abs(cos(bullet.getRotation()));
	movmentB.y += abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() >= 132 && bullet.getRotation() <= 137) {//goes right and down
	movmentB.x += 0; movmentB.y = movmentB.x;
	}
	if (bullet.getRotation() >= 138 && bullet.getRotation() <= 159) {
	movmentB.x += abs(cos(159));
	movmentB.y += abs(sin(159));
	}
	if (bullet.getRotation() >= 160 && bullet.getRotation() <= 170) {
	movmentB.x += abs(cos(bullet.getRotation()));
	movmentB.y += abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() == 171 || bullet.getRotation() == 172) {
	movmentB.x += abs(cos(bullet.getRotation()));
	movmentB.y += abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() >= 173 && bullet.getRotation() <= 177) {
	movmentB.x += abs(cos(bullet.getRotation()));
	movmentB.y += abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() >= 178 && bullet.getRotation() <= 183) {//goes down
	movmentB.y += 0;
	}
	if (bullet.getRotation() >= 184 && bullet.getRotation() <= 190) {
	movmentB.x -= abs(cos(bullet.getRotation()));
	movmentB.y += abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() >= 191 && bullet.getRotation() <= 199) {
	movmentB.x -= abs(cos(bullet.getRotation()));
	movmentB.y += abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() >= 200 && bullet.getRotation() <= 222) {
	movmentB.x -= abs(cos(bullet.getRotation()));
	movmentB.y += abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() >= 223 && bullet.getRotation() <= 227) {//goes left and down
	movmentB.x -= cos(45);
	movmentB.y += sin(45);
	}
	if (bullet.getRotation() >= 228 && bullet.getRotation() <= 238) {
	movmentB.x -= abs(cos(bullet.getRotation()));
	movmentB.y += abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() >= 239 && bullet.getRotation() <= 253) {
	movmentB.x -= abs(cos(bullet.getRotation()));
	movmentB.y += abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() >= 254 && bullet.getRotation() <= 266) {
	movmentB.x -= abs(cos(bullet.getRotation()));
	movmentB.y += abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() >= 267 && bullet.getRotation() <= 272) {//goes left
	movmentB.x -= 0;
	}
	if (bullet.getRotation() >= 273 && bullet.getRotation() <= 286 && bullet.getRotation() != 285) {
	movmentB.x -= abs(cos(bullet.getRotation()));
	movmentB.y -= abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() == 285) {
	movmentB.x -= abs(cos(285));
	movmentB.y -= abs(sin(285) / 100000);//werid could cause glitch
	}
	if (bullet.getRotation() >= 287 && bullet.getRotation() <= 312) {
	movmentB.x -= abs(cos(bullet.getRotation()));
	movmentB.y -= abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() >= 313 && bullet.getRotation() <= 317) {//goes left and up
	movmentB.x -= 0.9; movmentB.y = movmentB.x;
	}
	if (bullet.getRotation() >= 318 && bullet.getRotation() <= 339) {
	movmentB.x -= abs(cos(bullet.getRotation()));
	movmentB.y -= abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() >= 340 && bullet.getRotation() <= 344) {
	movmentB.x -= abs(cos(bullet.getRotation()));
	movmentB.y -= abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() >= 345 && bullet.getRotation() <= 357) {
	movmentB.x -= abs(cos(bullet.getRotation()));
	movmentB.y -= abs(sin(bullet.getRotation()));
	}
	if (bullet.getRotation() == 358 || bullet.getRotation() == 359) {//goes up
	movmentB.y -= abs(sin(0)+0.2);
	}
	*/
	//moves bullet base on how far away the mouse is from the player
	movmentB.x = (mouse_float.x -weremove.x) / 5;//good line of code to think about movement
	movmentB.y = (mouse_float.y - weremove.y) / 5;//IMPORTANT weremove is assgined a value in the constuctor
	//cout<< mouse_float.x - weremove.x <<","<< mouse_float.y - weremove.y <<endl;
	//cout << "this is X  " << movmentB.x << endl;
	//cout << "this is Y  " << movmentB.y << endl;
	//limits speed
	/*if (movmentB.x > 1) {
	movmentB.x = 1;
	}
	if (movmentB.y > 1) {
	movmentB.y = 1;
	}
	if (movmentB.x < -1) {
	movmentB.x = -1;
	}
	if (movmentB.y < -1) {
	movmentB.y = -1;
	}*/
	movmentB.x = (movmentB.x *deltaTimeB * 6);//scales movment based on delta time
	movmentB.y = (movmentB.y * deltaTimeB * 6);//scales movement based on delta time

	bullet.move(movmentB);//moves bullet by the amount movmentB
}
void bullets::getWere(sf::Sprite ship)
{
	weremove=ship.getPosition();
}



//void bullets::hits(sf::Sprite & bullet, int & shipshealth, int & shipsheild, sf::Sprite & ship)
//{
//	if (bullet.getGlobalBounds().intersects(ship.getGlobalBounds)) {
//		if (shipsheild>0) {
//			shipsheild -= damgeB;
//		}
	//	else if (shipshealth>0) {
	//		shipshealth -= damgeB;
	//	}
//	}
//}
