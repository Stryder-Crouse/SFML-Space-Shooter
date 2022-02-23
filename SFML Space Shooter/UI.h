#pragma once
#include"Imports.h"
class Ui {
public:
	float boarderSizeH ;//stores max health
	float boarderSizeS ;//stores max sheild
	sf::ConvexShape boarderH;//stores healths boarder rectangle
	sf::ConvexShape BlackspaceH;//stores boarder rectangle behind health
	sf::ConvexShape Healthbar;//stores green Health bar based off player current health
	sf::ConvexShape boarderS;//stores sheilds boarder rectangle
	sf::ConvexShape sheildbar;//stores blue Sheald bar based off player current sheild
	sf::ConvexShape BlackspaceS;//stores boarder rectangle behind sheild bar
	void createHealthBar(int shiphealth);//creates and updates Sheildbar bsed on players Sheild and max Sheild
	void createSheildBar(int shipSheild);//creates and updates Sheildbar bsed on players Sheild and max Sheild
	void getboarderSizeH(int shipHealths);//gets max player health
	void getboarderSizeS(int shipSheilds);//gets max player sheild
};