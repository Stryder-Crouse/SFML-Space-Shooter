#include"background.h"

back::back() :back::back(sf::Vector2f(600, 486), "Textures/space back.jpg") {
}
back::back(sf::Vector2f position, std::string texFileLoc)
{
	space.loadFromFile(texFileLoc);//loads texture into file
	background.setTexture(space);//sets texter as background texture
	background.setOrigin(background.getLocalBounds().width / 2, background.getLocalBounds().height / 2);//set orgin of image to center
	background.setPosition(position);//sets background to center of the window
	background.setScale(2, 2);//slace up back ground to 2x it orginal hight;
}
