#include "UI.h"

void Ui::createHealthBar(int shiphealth)
{
	//creates green health bar bses on health remaning
	Healthbar.setFillColor(sf::Color::Green);
	Healthbar.setPointCount(4);
	Healthbar.setPoint(0, sf::Vector2f(10, 932));
	Healthbar.setPoint(1, sf::Vector2f((shiphealth * 5)+10, 932));
	Healthbar.setPoint(2, sf::Vector2f((shiphealth * 5)+10, 962));
	Healthbar.setPoint(3, sf::Vector2f(10, 962));
	//cout << shiphealth << endl;
	//creates back space behind the green bar based on maxuim health
	BlackspaceH.setFillColor(sf::Color::Black);
	BlackspaceH.setPointCount(4);
	BlackspaceH.setPoint(0, sf::Vector2f(10, 932));
	BlackspaceH.setPoint(1, sf::Vector2f((boarderSizeH * 5)+10, 932));
	BlackspaceH.setPoint(2, sf::Vector2f((boarderSizeH* 5)+10, 962));
	BlackspaceH.setPoint(3, sf::Vector2f(10, 962));

	//creates boarder behind the green bar based on maxuim health
	boarderH.setFillColor(sf::Color::Magenta);
	boarderH.setPointCount(4);
	boarderH.setPoint(0,sf::Vector2f(0, 922));
	boarderH.setPoint(1, sf::Vector2f((boarderSizeH * 5) + 20, 922));
	boarderH.setPoint(2, sf::Vector2f((boarderSizeH * 5) + 20, 972));
	boarderH.setPoint(3, sf::Vector2f(0, 972));
	
}

void Ui::createSheildBar(int shipSheild)
{
	//creates green sheild bar bses on sheild remaning
	sheildbar.setFillColor(sf::Color::Blue);
	sheildbar.setPointCount(4);
	sheildbar.setPoint(0, sf::Vector2f(1190, 932));
	sheildbar.setPoint(1, sf::Vector2f(1190-(shipSheild * 5), 932));
	sheildbar.setPoint(2, sf::Vector2f(1190 - (shipSheild * 5), 962));
	sheildbar.setPoint(3, sf::Vector2f(1190, 962));
	//cout << boarderSizeS << endl;
	//creates back space behind the green bar based on maxuim sheild
	BlackspaceS.setFillColor(sf::Color::Black);
	BlackspaceS.setPointCount(4);
	BlackspaceS.setPoint(0, sf::Vector2f(1190, 932));
	BlackspaceS.setPoint(1, sf::Vector2f(1190-(boarderSizeS * 5), 932));
	BlackspaceS.setPoint(2, sf::Vector2f(1190-(boarderSizeS * 5), 962));
	BlackspaceS.setPoint(3, sf::Vector2f(1190, 962));

	//creates boarder behind the green bar based on maxuim sheild
	boarderS.setFillColor(sf::Color::Magenta);
	boarderS.setPointCount(4);
	boarderS.setPoint(0, sf::Vector2f(1200, 922));
	boarderS.setPoint(1, sf::Vector2f(1190-(boarderSizeS * 5) -10, 922));
	boarderS.setPoint(2, sf::Vector2f(1190-(boarderSizeS * 5) -10, 972));
	boarderS.setPoint(3, sf::Vector2f(1200, 972));
}

void Ui::getboarderSizeH(int shipHealths)
{
	boarderSizeH = shipHealths;//get max ships health
}

void Ui::getboarderSizeS(int shipSheilds)
{
	boarderSizeS = shipSheilds;//gets max ship sheild;
}
