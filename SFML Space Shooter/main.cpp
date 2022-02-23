#include"Imports.h"
#include"background.h"
#include"Player.h"
#include"movement.h"
#include"bullet.h"
#include"Evil.h"
#include"UI.h"
#include"leaderboard.h"

enum gamestates {intro,playing,dead};
int main()
{
	// ^^ XOR for if staments very nice
	//.pop_back(); another way to dealte things from an vector
	//unsinged int unsinged means that it cant store negative numbers as it does not use one of the bits to tell the computer if it is negtive or not
	//this->name=name allow for the class to have the same varable names when it conscuts look at player conructor
	//sets game state
	gamestates game = intro;
	//forloop ints
	int k;
	int i;
	int s;
	int j;
	int y;
	int p;
	int L;
	int o;
	int z;
	int g;
	int q;
	int c;
	int nosheaild = 0;//used to allow enamys to have no sheild
	int created = 0;//chaks if player bullets were spawned
	bool smcreated = false;//chaks if small ships bullets were spawned
	bool mmcreated = false;//chaks if meduim ships bullets were spawned
	bool lgcreated = false;//chaks if large ships bullets were spawned
	int hardness = 1;//how had the game is
	//stores bullets
	std::vector<bullets*> projectiles;
	std::vector<bullets*> smallbullet;
	std::vector<bullets*> mediumbullet;
	std::vector<bullets*> largebullet;
	//stores shipsq
	std::vector<evils*> smallships;
	std::vector<evils*> mediumships;
	std::vector<evils*> largeships;
	bool shipsspawned = false;
	float spawntimer = 0;//spawns ships
	//sf::Clock spawnclock;//spawns ships

	float timer = 0;//timer for movement
	//sf::Clock clock;//timer for movement

	float timer2 = 0;//timer for movment of bullets
	//sf::Clock clock2;//timer for movment of bullets

	float timer3 = 0;//timer for spawn of small bullets
	//sf::Clock clock3;//timer for spawn of small bullets
	
	float timer4 = 0;//timer for spawn of medium bullets
	//sf::Clock clock4;//timer for spawn of medium bullets

	float timer5 = 0;//timer for spawn of large bullets
	//sf::Clock clock5;//timer for spawn of large bullets

	float timer6 = 0;//timer for spawn of medium bullets
	//sf::Clock clock6;//timer for spawn of medium bullets

	float Healthtimer = 0;//timer for regen of health
	//sf::Clock Healthclock;//timer for regen of health

	float Sheildtimer = 0;//timer for regen of Sheild
	//sf::Clock Sheildclock;//timer for regen of Sheild

	float deltaTime=0;//time bewtween frames also known as delta time
	sf::Clock deltaClock;//sets time between frams

	float updatetimer = 0;//updates the draws
	//random poisioning
	random_device randcod;
	sf::Vector2f ranc ;
	sf::RenderWindow window(sf::VideoMode(1200, 972), "Space Shooter!");
	/* back ground deceration
	//background texture
	sf::Texture space;
	space.loadFromFile("Textures/space back.jpg");
	//background sprite
	sf::Sprite background;
	background.setTexture(space);//sets texter as background texture
	background.setOrigin(background.getLocalBounds().width / 2, background.getLocalBounds().height / 2);//set orgin of image to center
	background.setPosition(600, 486);//sets background to center of the window
	background.setScale(2,2);//slace up back ground to 2x it orginal hight;
	*/
	//intro screen
	sf::Texture introspace;
	introspace.loadFromFile("Textures/intro_0.png");//can see press space
	sf::Texture introNOspace;
	introNOspace.loadFromFile("Textures/intro_1.png");//can't see space
	sf::Sprite introScreen;
	introScreen.setTexture(introspace);//sets texture
	introScreen.setOrigin(introScreen.getLocalBounds().width/2,introScreen.getLocalBounds().height/2);//sets sprite to be drawn from center
	introScreen.setPosition(window.getSize().x/2,window.getSize().y/2);//sets sprite to middle of screen
	//death screen
	sf::Texture died;//texture for death screen
	died.loadFromFile("Textures/Dead.png");
	sf::Texture restart;//texture for estart text
	restart.loadFromFile("Textures/restart.png");
	sf::Sprite deadscreen;//sprite that dispays death screen texture
	deadscreen.setTexture(died);//sets texture to Dead.png
	deadscreen.setOrigin(deadscreen.getLocalBounds().width/2,deadscreen.getLocalBounds().height/2);//sets origin to the center of the sprite
	deadscreen.setPosition(window.getSize().x / 2, window.getSize().y / 2);//sets postion of the sprite to middle
	sf::Sprite restartscreen;//sprite for restart text
	restartscreen.setTexture(restart);//sets texure to restart.png
	restartscreen.setOrigin(restartscreen.getLocalBounds().width/2,restartscreen.getLocalBounds().height/2);//sets oragi  to middle of texture
	restartscreen.setPosition(deadscreen.getLocalBounds().width,deadscreen.getLocalBounds().height-100);//-100 sets it bellow dead screens texture
	//timer for anmation
	float introtimer = 0;
	sf::Clock introclock;
	bool cansee = false;

	back backgrounds;//set background up
	//sets player up useing overloaded consturctor
	play player = play::play(20, 10, 30, sf::Vector2f(600, 486), "Textures/SpaceShip_0.png", "Textures/SpaceShip_1.png", "Textures/SpaceShip_2.png", "Textures/SpaceShip_3.png");
	//player.playerShip.setRotation(0);//for testing 
	//set move
	movement mover=movement(deltaTime);//sets up delta time
	//set score text and int
	int score = 0;
	sf::Text scoretext;//create var to store text;
	sf::Font myFont;//stores font for texts
	myFont.loadFromFile("Font/BlackOpsOne-Regular.ttf");//set the font to the myfount varable

	scoretext.setFont(myFont);//set font to text
	scoretext.setString("Score:"+ to_string(score));//sets text to text
	scoretext.setCharacterSize(36);//sets size of text
	scoretext.setFillColor(sf::Color::Blue);//sets color of text
	scoretext.setPosition(0,0);
	//text for waves
	sf::Text waves;
	waves.setFont(myFont);//set font to text
	waves.setString("Wave" + to_string(hardness));//sets text to text
	waves.setCharacterSize(72);//sets size of text
	waves.setFillColor(sf::Color::Green);//sets color of text
	waves.setPosition(window.getSize().x/2,(window.getSize().y/2)-50);
	waves.setOrigin(waves.getLocalBounds().width / 2, waves.getLocalBounds().height / 2);
	int waveOpacany = 255;//waveOpacany stores wave text opacancy
	float fadetimer = 0;//for fate of wave text
	sf::Clock fadeclock;//for fade of waves text
	//UI for player
	Ui gui;
	gui.getboarderSizeH(player.Health);//get maxuim size for createing the health bar 
	gui.createHealthBar(player.Health);//creates health bar
	gui.getboarderSizeS(player.Sheald);
	gui.createSheildBar(player.Sheald);
	//leaderboard
	leaderB leader;
	bool update = false;//allows leader board to be updated once when the game ends
	leader.getleaderboard();//gets scores from leaderboard txt file
	leader.makeleaderboadtext();//gets up leader board text size and postion
	//sound and music
	sf::Music othermusic;
	othermusic.openFromFile("Sound/Stellardrone - To The Great Beyond(sound track.music).flac");//opens music
	othermusic.play();//plays music
	//player shooting sound
	sf::SoundBuffer playershootsound;
	playershootsound.loadFromFile("Sound/Laser_Gun-(player shooting sound).flac");//loads file to menory to be played
	sf::Sound playershoot;
	playershoot.setBuffer(playershootsound);//sets soundbuffer to sound class
	//sheildhit sound
	sf::SoundBuffer sheildhitsound;
	sheildhitsound.loadFromFile("Sound/49695__ejfortin__energy-whip-2(sheildHitSoundEffect).wav");//loads file to menory to be played
	sf::Sound sheildhit;
	sheildhit.setBuffer(sheildhitsound);//sets soundbuffer to sound class
	//HealthHit sound
	sf::SoundBuffer healthHitsound;
	healthHitsound.loadFromFile("Sound/345758__soundtracvkradio__sound-effects-gate-bash-in-street-(Health hit sound).wav");//loads file to menory to be played
	sf::Sound healthHit;
	healthHit.setBuffer(healthHitsound);//sets soundbuffer to sound class
	//Sheild regen sound
	sf::SoundBuffer SheildRegenSound;
	SheildRegenSound.loadFromFile("Sound/245152__jobro__laser-1-rev-up(sheild regen sound).ogg");//loads file to menory to be played
	sf::Sound SheildRegen;
	SheildRegen.setBuffer(SheildRegenSound);//sets soundbuffer to sound class
	//small ship shoot sound
	sf::SoundBuffer smShipFireSound;
	smShipFireSound.loadFromFile("Sound/49678__ejfortin__energy-short-sword-7(small ship shooting sound).wav");//loads file to menory to be played
	sf::Sound smShipFire;
	smShipFire.setBuffer(smShipFireSound);//sets soundbuffer to sound class
	//medium ship shoot sound
	sf::SoundBuffer mmShipFireSound;
	mmShipFireSound.loadFromFile("Sound/49680__ejfortin__nano-blade-1(medium ship shoot sound).wav");//loads file to menory to be played
	sf::Sound mmShipFire;
	mmShipFire.setBuffer(mmShipFireSound);//sets soundbuffer to sound class
	//large ship shoot sound
	sf::SoundBuffer lgShipFireSound;
	lgShipFireSound.loadFromFile("Sound/183870__m-red__darkdetonation01(lage ship shoot sound).wav");//loads file to menory to be played
	sf::Sound lgShipFire;
	lgShipFire.setBuffer(lgShipFireSound);//sets soundbuffer to sound class
	//Health low sound
	sf::SoundBuffer HealthLowSound;
	HealthLowSound.loadFromFile("Sound/33789__jobro__5-beep-c(Health low sound).wav");//loads file to menory to be played
	sf::Sound HealthLow;
	HealthLow.setBuffer(HealthLowSound);//sets soundbuffer to sound class
	//Health full sound
	sf::SoundBuffer HealthRegenSound;
	HealthRegenSound.loadFromFile("Sound/244985__zbig77__repair-metal(Health Regen sound).wav");//loads file to menory to be played
	sf::Sound HealthRegen;
	HealthRegen.setBuffer(HealthRegenSound);//sets soundbuffer to sound class
	//text for deadth OLD
	/*
	sf::Text death;//create var to store text;
	sf::Font myFont;//stores font for texts
	myFont.loadFromFile("Font/Candal.ttf");//set the font to the myfount varable

	death.setFont(myFont);//set font to text
	death.setString("You Have Died");//sets text to text
	death.setCharacterSize(24);//sets size of text
	death.setFillColor(sf::Color::White);//sets color of text
	death.setPosition(600, 486);
	death.setOrigin(death.getLocalBounds().width/2,death.getLocalBounds().height/2);
	*/
	//enamy
	//evils smship= evils::evils(2,10, "Textures/SmallevilShip_0.png", "Textures/SmallevilShip_1.png", sf::Vector2f(600, 200));
	//evils mmship = evils::evils(4, 20, "Textures/midEvilShip_0.png", "Textures/midEvilShip_1.png", sf::Vector2f(600, 100));
	//evils lgship = evils::evils(8, 40, "Textures/evilship_0.png", "Textures/evilship_1.png", sf::Vector2f(600, 300));
	//set moves bool arry to false
	mover.insilizeBools(mover.moveD);
	window.setFramerateLimit(0);
	//cout << leader. << endl;
	//bullets bs = bullets::bullets(1,Textures/small bullet.png", player.playerShip, sf::Vector2f(0, 0));
	while (window.isOpen())
	{
		deltaTime = deltaClock.restart().asSeconds();
		mover.getDelta(deltaTime);//sets delta time for player movement
		
		//timer6 = clock6.getElapsedTime().asSeconds();
		//if (timer6 > 0.00f) {//0.0012 for codeing computer
			sf::Event event;
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::KeyPressed)
				{
					if (event.key.code == sf::Keyboard::W) {
						mover.insilizeBools(mover.moveD);
						mover.cheakmove(mover.moveD, player.playerShip);//cheaks were ships is faceing

					}
					if (event.key.code == sf::Keyboard::A) {
						mover.rotateL(player.playerShip);//rotates L
					}
					if (event.key.code == sf::Keyboard::D) {
						mover.rotateR(player.playerShip);//rotates R
					}
					if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
						//timer2 = clock2.getElapsedTime().asSeconds();//resets clock
						timer2 += deltaTime;//delta time in real seconds
						if (timer2 > 0.25f)//0.1f set ofen you can fire
						{
							playershoot.play();//plays shooting sound
							sf::Vector2f mouse_float = sf::Vector2f(sf::Mouse::getPosition(window));//finds mouse location
							bullets* new_bullet = new bullets(player.Damage, "Textures/small bullet.png", player.playerShip, sf::Vector2f(0, 0), mouse_float,deltaTime);//spawns bullet 
							new_bullet->mouseinput = mouse_float;//sets trajectory of the bullet
							new_bullet->shipinput = player.playerShip.getPosition();//sets postion for the bullet oragin
							projectiles.push_back(new_bullet);//add new bullet to vector arry

							created = 1;//stops for loop from cheaking for bullets when they dont exist
							//clock2.restart();//restarts the clock limiting how fast you can fire
							timer2 = 0;//restes timer2
						}
					}
				}
				if (event.type == sf::Event::KeyReleased) {
					if (event.key.code == sf::Keyboard::W) {
						mover.insilizeBools(mover.moveD);//resets mover
						if (player.Sheald <= 0) {
							player.playerShip.setTexture(player.shipNM);//set ship to not movemnt texture
						}
						else if (player.Sheald > 0) {
							player.playerShip.setTexture(player.shipSNM);
						}
					}
					if (event.key.code == sf::Keyboard::A) {

					}
					if (event.key.code == sf::Keyboard::D) {

					}
				}
				if (event.type == sf::Event::Closed)
					window.close();
			}
			//cheaks if key is still beaing pressed //IMPORTANT allow multiple key inputs at the smae time (like rotateing and going forward)
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
				mover.rotateR(player.playerShip);//rotates R

			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
				mover.rotateL(player.playerShip);//rotates l

			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
				if (game == intro) {
					game = playing;
				}
				else if (game == dead) {
					//restart code does not work (NOW WORKS but still a bit buggy)
					
					k=0;
					i=0;
					s=0;
					j=0;
					y=0;
					p=0;
					L=0;
					o=0;
					z=0;
					g=0;
					player.Health = 20;//resets players health
					player.Sheald = 30;//rests sheild
					player.playerShip.setTexture(player.shipSNM);//ressets texture for player's ship for it to have a shield
					player.playerShip.setPosition(600, 486);
					for (c = 0; c < 999; c++) {//makes sure they dealte the bullets 
						for (q = 0; q < smallbullet.size(); q++) {
							//smallbullet[q]->mouseinput.x = 0;
							//smallbullet[q]->mouseinput.y = 0;
							smallbullet.erase(smallbullet.begin() + q);//dealtes all small bullets 
						}
						for (q = 0; q < smallships.size(); q++) {
							smallships.erase(smallships.begin() + q);//dealtes all small ships
						}
						for (q = 0; q < mediumbullet.size(); q++) {
							mediumbullet.erase(mediumbullet.begin() + q);//dealtes all medium bullets
						}
						for (q = 0; q < mediumships.size(); q++) {
							mediumships.erase(mediumships.begin() + q);//dealtes all medium ships
						}
						for (q = 0; q < largebullet.size(); q++) {
							largebullet.erase(largebullet.begin() + q);//dealtes all large bullets
						}
						for (q = 0; q < largeships.size(); q++) {
							largeships.erase(largeships.begin() + q);//dealthes all large ships
						}
						for (q = 0; q < projectiles.size(); q++) {
							projectiles.erase(projectiles.begin() + q);//dealtes all player projectiles
						}
					}
				
					created = 0;//resets if player bullets have spawned varable to false
					smcreated = false;//resets if small bullets were created
					mmcreated = false;//resets if medium bullets were created
					lgcreated = false;//resets if large bullets were created
					shipsspawned = false;//resets if ships have spawned to false

					hardness = 1;//resets how many enamys are spawned

					spawntimer = 0;//spawns ships timer set to 0
					//spawnclock.restart();//restarts spawns ships clock

					timer = 0;//resets timer for  movement
					//clock.restart();//resets timer for  movement

					timer2 = 0;//resets timer for  movment of bullets
					//clock2.restart();//resets timer for  movment of bullets

					timer3 = 0;//resets timer for  spawn of small bullets
					//clock3.restart();//resets timer for  spawn of small bullets

					timer4 = 0;//resets timer for  spawn of medium bullets
					//clock4.restart();//resets timer for  spawn of medium bullets

					timer5 = 0;//resets timer for  spawn of large bullets
					//clock5.restart();//resets timer for  spawn of large bullets

					timer6 = 0;//resets timer for  game times
					//clock6.restart();//resets timer game times

					//timer for anmation
					introtimer = 0;
					introclock.restart();
					cansee = false;
					score = 0;//adds to score
				//	cout << "small\n" <<smallships.size() << "medium\n" << mediumships.size() << "large\n" << largeships.size() << endl;
					game = intro;
					
				}
			}
			//recheaks faceing of ship
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
				mover.insilizeBools(mover.moveD);
				mover.cheakmove(mover.moveD, player.playerShip);//cheaks were ships is faceing
				if (player.Sheald <= 0) {
					player.playerShip.setTexture(player.shipMOV);//sets ship to movement texture
				}
				else if (player.Sheald > 0) {
					player.playerShip.setTexture(player.shipSMOV);
				}
			}

			//mouse click to fire bullet
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
				//timer2 = clock2.getElapsedTime().asSeconds();//resets clock
				timer2 += deltaTime;
				if (timer2 > 0.25f)//0.1f set ofen you can fire
				{
					playershoot.play();//plays shooting sound
					sf::Vector2f mouse_float = sf::Vector2f(sf::Mouse::getPosition(window));//finds mouse location
					bullets* new_bullet = new bullets(player.Damage, "Textures/small bullet.png", player.playerShip, sf::Vector2f(0, 0), mouse_float, deltaTime);//spawns bullet 
					new_bullet->mouseinput = mouse_float;//sets trajectory of the bullet
					new_bullet->shipinput = player.playerShip.getPosition();//sets postion for the bullet oragin
					projectiles.push_back(new_bullet);//add new bullet to vector arry

					created = 1;//stops for loop from cheaking for bullets when they dont exist
					//clock2.restart();//restarts the clock limiting how fast you can fire
					timer2 = 0;
				}
			}
			switch (game)
			{
			case intro:
				window.clear();
				//introtimer = introclock.getElapsedTime().asSeconds();
				introtimer += deltaTime;
				if (introtimer > 0.5f) {
					if (cansee == false) {
						introScreen.setTexture(introNOspace);
						cansee = true;
					}
					else {
						introScreen.setTexture(introspace);
						cansee = false;
					}
					//introclock.restart();
					introtimer = 0;
				}
				
				window.draw(introScreen);
				break;



			case playing:
				//movement
				//timer = clock.getElapsedTime().asSeconds();//stores seconds past in timer
				timer += deltaTime;
				if (timer >= 0.033586)//0.1f set ofen move is updated 0.033586 about 30fps 
				{
					mover.realmove(mover.moveD, mover.mover2, mover.trust, player.playerShip);//moves ship
					//clock.restart();//restarts the clock limiting how fast movement id updated
					timer = 0;
				}
				//spawntimer = spawnclock.getElapsedTime().asSeconds();
				spawntimer += deltaTime;
				//spawns ships
				if (smallships.size() == 0 && mediumships.size() == 0 && largeships.size() == 0) {
					shipsspawned = false;
					if (spawntimer > 3.0) {
						if (shipsspawned == false) {
							waveOpacany = 255;//erst wave opacancy
							//randoms spawn small ship
							for (g = 0; g < (hardness/2)+1; g++) {
								//set location spawn code
								/*
								do {
									ranc.x = randcod() % 8;
									if (ranc.x == 0) {
										ranc.x = 200;
										ranc.y = 200;
									}
									else if (ranc.x == 1) {
										ranc.x = 1000;
										ranc.y = 200;
									}
									else if (ranc.x == 2) {
										ranc.x = 200;
										ranc.y = 700;
									}
									else if (ranc.x == 3) {
										ranc.x = 600;
										ranc.y = 200;
									}
									else if (ranc.x == 4) {
										ranc.x = 600;
										ranc.y = 700;
									}
									else if (ranc.x == 5) {
										ranc.x = 1000;
										ranc.y = 450;
									}
									else if (ranc.x == 6) {
										ranc.x = 200;
										ranc.y = 450;
									}
									else if (ranc.x == 7) {
										ranc.x = 600;
										ranc.y = 200;
									}


								} while (player.playerShip.getGlobalBounds().width == ranc.x&&player.playerShip.getGlobalBounds().height == ranc.y);
								*/
								//evils* new_smallship = new evils(2, 10, "Textures/SmallevilShip_0.png", "Textures/SmallevilShip_1.png", sf::Vector2f(ranc.x, ranc.y));
								evils* new_smallship = new evils(2, 10, "Textures/SmallevilShip_0.png", "Textures/SmallevilShip_1.png", sf::Vector2f(randcod()%1200,randcod()%972));
								new_smallship->deltaTimeE = deltaTime;
								smallships.push_back(new_smallship);
							}
							//randoms spawn medium ship
							for (g = 0; g < (hardness/4) ; g++) {
								//set location spawn code
								/*
								do {
									ranc.x = randcod() % 8;
									if (ranc.x == 0) {
										ranc.x = 200;
										ranc.y = 200;
									}
									else if (ranc.x == 1) {
										ranc.x = 1000;
										ranc.y = 200;
									}
									else if (ranc.x == 2) {
										ranc.x = 200;
										ranc.y = 700;
									}
									else if (ranc.x == 3) {
										ranc.x = 1000;
										ranc.y = 700;
									}
									else if (ranc.x == 4) {
										ranc.x = 600;
										ranc.y = 700;
									}
									else if (ranc.x == 5) {
										ranc.x = 1000;
										ranc.y = 450;
									}
									else if (ranc.x == 6) {
										ranc.x = 200;
										ranc.y = 450;
									}
									else if (ranc.x == 7) {
										ranc.x = 600;
										ranc.y = 200;
									}

								} while (player.playerShip.getGlobalBounds().width == ranc.x&&player.playerShip.getGlobalBounds().height == ranc.y);
								*/
								//evils* new_mediumship = new evils(4, 20, "Textures/midEvilShip_0.png", "Textures/midEvilShip_1.png", sf::Vector2f(ranc.x, ranc.y));
								evils* new_mediumship = new evils(4, 20, "Textures/midEvilShip_0.png", "Textures/midEvilShip_1.png", sf::Vector2f(randcod() % 1200, randcod() % 972));
								new_mediumship->deltaTimeE = deltaTime;
								mediumships.push_back(new_mediumship);
							}
							//randoms spawn large ship
							for (g = 0; g < (hardness/8) ; g++) {
								//set location spawn code
								/*
								do {
									ranc.x = randcod() % 8;
									if (ranc.x == 0) {
										ranc.x = 200;
										ranc.y = 200;
									}
									else if (ranc.x == 1) {
										ranc.x = 1000;
										ranc.y = 200;
									}
									else if (ranc.x == 2) {
										ranc.x = 200;
										ranc.y = 700;
									}
									else if (ranc.x == 3) {
										ranc.x = 1000;
										ranc.y = 700;
									}
									else if (ranc.x == 4) {
										ranc.x = 600;
										ranc.y = 700;
									}
									else if (ranc.x == 5) {
										ranc.x = 1000;
										ranc.y = 450;
									}
									else if (ranc.x == 6) {
										ranc.x = 200;
										ranc.y = 450;
									}
									else if (ranc.x == 7) {
										ranc.x = 600;
										ranc.y = 200;
									}

								} while (player.playerShip.getGlobalBounds().width == ranc.x&&player.playerShip.getGlobalBounds().height == ranc.y);
								*/
								//evils* new_largeship = new evils(8, 40, "Textures/evilship_0.png", "Textures/evilship_1.png", sf::Vector2f(ranc.x, ranc.y));
								evils* new_largeship = new evils(8, 40, "Textures/evilship_0.png", "Textures/evilship_1.png", sf::Vector2f(randcod() % 1200, randcod() % 972));
								new_largeship->deltaTimeE = deltaTime;
								largeships.push_back(new_largeship);
							}
						}
						shipsspawned = true;
						hardness++;
					}
				}
				//mover.realmove(mover.moveD,mover.mover2,mover.trust,player.playerShip);//moves ship
				mover.cheakBounds(player.playerShip, mover.mover2);//sees if ship is out of bounds
													 //cout << player.playerShip.getRotation()<< "   mover" << endl;
													 //bs.Bulletmoves(player.playerShip,bs.bullet,bs.movmentB);
				window.clear();						 //cout << bs.bullet.getPosition().x << endl;
				
					
					window.draw(backgrounds.background);//draws background

					gui.createHealthBar(player.Health);//updates the health bar based on player health
					window.draw(gui.boarderH);//draws the boarder for the health bar
					window.draw(gui.BlackspaceH);//draws the black space behind the health bar
					window.draw(gui.Healthbar);//draws the health bar

					gui.createSheildBar(player.Sheald);//updates the Sheild bar based on player Sheild
					window.draw(gui.boarderS);//draws the boarder for the Sheild bar
					window.draw(gui.BlackspaceS);//draws the black space behind the Sheild bar
					window.draw(gui.sheildbar);//draws the Sheild bar

					player.playerShip.move(mover.mover2.x*deltaTime*500,mover.mover2.y*deltaTime*500);//moves ship//scales with delta Time
					window.draw(player.playerShip);
					//spawns evil bullets
					if (shipsspawned == true) {
						//bullets shoot small ship
						//timer3 = clock3.getElapsedTime().asSeconds();//resets clock
						timer3 += deltaTime;
						if (timer3 > 1.0f)//0.1f set ofen you can fire
						{
							for (o = 0; o < smallships.size(); o++) {
								smShipFire.play();//plays small ship shoot dound
								smallships[o]->rotate(smallships[o]->rotateBy, player.playerShip);//makes frist bullet rotae correctly
																								  //cout << "did" << endl;
								bullets* new_smbullet = new bullets(smallships[o]->EDamge, "Textures/small bulletOLD.png", smallships[o]->evilShip, sf::Vector2f(0, 0), player.playerShip.getPosition(), deltaTime);//spawns bullet 
								new_smbullet->mouseinput = player.playerShip.getPosition();//sets trajectory of the bullet
								smallbullet.push_back(new_smbullet);//add new bullet to vector arry
								smcreated = 1;//stops for loop from cheaking for bullets when they dont exist
								//clock3.restart();//restarts the clock limiting how fast you can fire
								timer3 = 0;
							}
						}
						//bullets shoot meduim ship
						//timer4 = clock4.getElapsedTime().asSeconds();//resets clock
						timer4 += deltaTime;
						if (timer4 > 2.0f)//0.1f set ofen you can fire
						{
							for (o = 0; o < mediumships.size(); o++) {
								mmShipFire.play();//plays medium ship fire sound when the ships fire
								mediumships[o]->rotate(mediumships[o]->rotateBy, player.playerShip);//makes frist bullet rotae correctly
																									//cout << "did 2" << endl;
								bullets* new_mmbullet = new bullets(mediumships[o]->EDamge, "Textures/mid bullet.png", mediumships[o]->evilShip, sf::Vector2f(0, 0), player.playerShip.getPosition(), deltaTime);//spawns bullet 
								new_mmbullet->mouseinput = player.playerShip.getPosition();//sets trajectory of the bullet
								mediumbullet.push_back(new_mmbullet);//add new bullet to vector arry
								mmcreated = 1;//stops for loop from cheaking for bullets when they dont exist
								//clock4.restart();//restarts the clock limiting how fast you can fire
								timer4 = 0;
							}
						}
						//bullets shoots large ship
						//timer5 = clock5.getElapsedTime().asSeconds();//resets clock
						timer5 += deltaTime;
						if (timer5 > 5.0f)//0.1f set ofen you can fire
						{
							for (o = 0; o < largeships.size(); o++) {
								lgShipFire.play();//plays fire sound wenver large ship fires
								largeships[o]->rotate(largeships[o]->rotateBy, player.playerShip);//makes frist bullet rotae correctly
																								  //cout << "did 3" << endl;
								bullets* new_lgbullet = new bullets(largeships[o]->EDamge, "Textures/large bullet.png", largeships[o]->evilShip, sf::Vector2f(0, 0), player.playerShip.getPosition(), deltaTime);//spawns bullet 
								new_lgbullet->mouseinput = player.playerShip.getPosition();//sets trajectory of the bullet
								largebullet.push_back(new_lgbullet);//add new bullet to vector arry
								lgcreated = 1;//stops for loop from cheaking for bullets when they dont exist
								//clock5.restart();//restarts the clock limiting how fast you can fire
								timer5 = 0;
							}
						}
					}
					//draw evil and  sets were bullets come from
					if (shipsspawned == true) {
						for (j = 0; j < smallships.size(); j++) {
							smallships[j]->rotate(smallships[j]->rotateBy, player.playerShip);
							//movement of ships
							smallships[j]->evilmoves(smallships[j]->evilShip, smallships[j]->evilShip, player.playerShip.getPosition());
							smallships[j]->evilShip.setTexture(smallships[j]->EvilMOV);//sets txture to moveing
							mover.cheakBounds(smallships[j]->evilShip, smallships[j]->evilshipmov);
							//draw and dects coltions of bullets
							if (smcreated == true) {
								//bulletcode
								//code that causes the bullets to all fallow the same path
								//for (z = 0; z < smallbullet.size(); z++) {
									//smallbullet[z]->getWere(smallships[j]->evilShip);

								//}


							}
							window.draw(smallships[j]->evilShip);
						}

						for (y = 0; y < mediumships.size(); y++) {
							mediumships[y]->rotate(mediumships[y]->rotateBy, player.playerShip);
							//moves ship
							mediumships[y]->evilmoves(mediumships[y]->evilShip, mediumships[y]->evilShip, player.playerShip.getPosition());
							mediumships[y]->evilShip.setTexture(mediumships[y]->EvilMOV);//sets txture to moveing
							mover.cheakBounds(mediumships[y]->evilShip, mediumships[y]->evilshipmov);
							//dects bullet coltion
							if (mmcreated == 1) {
								//code that causes the bullets to all fallow the same path
								//for (z = 0; z < mediumbullet.size(); z++) {
									//mediumbullet[z]->getWere(mediumships[y]->evilShip);
								//}
								//cheaks if hits player

							}
							window.draw(mediumships[y]->evilShip);
						}

						for (k = 0; k < largeships.size(); k++) {
							largeships[k]->rotate(largeships[k]->rotateBy, player.playerShip);
							//moves ship
							largeships[k]->evilmoves(largeships[k]->evilShip, largeships[k]->evilShip, player.playerShip.getPosition());
							largeships[k]->evilShip.setTexture(largeships[k]->EvilMOV);//sets txture to moveing
							mover.cheakBounds(largeships[k]->evilShip, largeships[k]->evilshipmov);
							//sets bullet postion
							if (lgcreated == 1) {
								//code that causes the bullets to all fallow the same path
								//for (z = 0; z < largebullet.size(); z++) {
									//largebullet[z]->getWere(largeships[k]->evilShip);
								//}
							}
							window.draw(largeships[k]->evilShip);
						}

					}
					//moves and draws bullets for evil ships and sees if it hits player
					if (smcreated == true) {
						//bulletcode
						for (z = 0; z < smallbullet.size(); z++) {
							smallbullet[z]->Bulletmovesevil(smallbullet[z]->weremove, smallbullet[z]->bullet, smallbullet[z]->movmentB, smallbullet[z]->mouseinput);//moves bullet//small ships to o not z (POSSABLY)[yes now fixed]
							//cout << smallbullet[z]->weremove.x <<"," <<smallbullet[z]->weremove.y <<endl;
							window.draw(smallbullet[z]->bullet);//draw bullets
																//cheaking bullet out of screen
							if (smallbullet[z]->isOut(smallbullet[z]->bullet) == true) {

								smallbullet.erase(smallbullet.begin() + z);//dealtes bullet
								if (smallbullet.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
									break;
								}
							}
						}
						//cheaks if hits player
						for (z = 0; z < smallbullet.size(); z++) {
							//cheaking bullet hit player
							if (smallbullet[z]->isDistroyed(smallbullet[z]->bullet, player.Health, player.Sheald, player.playerShip) == true) {
								if (player.Sheald > 0) {
									sheildhit.play();//play sound when hit with sheild

								}
								if (player.Sheald <= 0) {
									player.playerShip.setTexture(player.shipNM);
								}
								if (player.Health > 0 && player.Sheald <= 0) {
									healthHit.play();//play sound when hit without sheild
								}
								if (player.Health <= 0) {
									//if player dead kills player
									game = dead;
								}

								//cout << player.Sheald << "sheald"<<endl;
								//cout << player.Health << "health" << endl;

								smallbullet.erase(smallbullet.begin() + z);
								if (smallbullet.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
									break;
								}
							}
						}

					}
					if (mmcreated == 1) {
						for (z = 0; z < mediumbullet.size(); z++) {

							mediumbullet[z]->Bulletmovesevil(mediumbullet[z]->weremove, mediumbullet[z]->bullet, mediumbullet[z]->movmentB, mediumbullet[z]->mouseinput);//moves bullet//small ships to o not z (POSSABLY)[yes now fixed]
							window.draw(mediumbullet[z]->bullet);//draw bullets
																 //cheaking bullet out of screen
							if (mediumbullet[z]->isOut(mediumbullet[z]->bullet) == true) {

								mediumbullet.erase(mediumbullet.begin() + z);//dealtes bullet
								if (mediumbullet.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
									break;
								}
							}
						}
						//cheaks if hits player
						for (z = 0; z < mediumbullet.size(); z++) {
							//cheaking bullet hit player
							if (mediumbullet[z]->isDistroyed(mediumbullet[z]->bullet, player.Health, player.Sheald, player.playerShip) == true) {
								if (player.Sheald > 0) {
									sheildhit.play();//play sound when hit with sheild

								}
								if (player.Sheald <= 0) {
									player.playerShip.setTexture(player.shipNM);
								}
								if (player.Health > 0 && player.Sheald <= 0) {
									healthHit.play();//play sound when hit without sheild
								}
								if (player.Health <= 0) {
									//if player dead kills player
									game = dead;
								}

								//cout << player.Sheald << "sheald" << endl;
								//cout << player.Health << "health" << endl;

								mediumbullet.erase(mediumbullet.begin() + z);
								if (mediumbullet.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
									break;
								}
							}
						}
					}
					if (lgcreated == 1) {
						for (z = 0; z < largebullet.size(); z++) {
							largebullet[z]->Bulletmovesevil(largebullet[z]->weremove, largebullet[z]->bullet, largebullet[z]->movmentB, largebullet[z]->mouseinput);//moves bullet//small ships to o not z (POSSABLY)[yes now fixed]
							window.draw(largebullet[z]->bullet);//draw bullets
																//cheaking bullet out of screen
							if (largebullet[z]->isOut(largebullet[z]->bullet) == true) {

								largebullet.erase(largebullet.begin() + z);//dealtes bullet
								if (largebullet.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
									break;
								}
							}
						}
						//cheaks if hits player
						for (z = 0; z < largebullet.size(); z++) {
							//cheaking bullet hit player
							if (largebullet[z]->isDistroyed(largebullet[z]->bullet, player.Health, player.Sheald, player.playerShip) == true) {
								if (player.Sheald > 0) {
									sheildhit.play();//play sound when hit with sheild

								}

								if (player.Sheald <= 0) {
									player.playerShip.setTexture(player.shipNM);
								}
								if (player.Health > 0 && player.Sheald <= 0) {
									healthHit.play();//play sound when hit without sheild
								}
								if (player.Health <= 0) {
									//if player dead kills player
									game = dead;
								}

								//cout << player.Sheald << "sheald" << endl;
								//cout << player.Health << "health" << endl;

								largebullet.erase(largebullet.begin() + z);
								if (largebullet.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
									break;
								}
							}
						}
					}
					//cycles though player bullets and draws them
					if (created == 1) {
						// if out of bounds dealtes
						for (i = 0; i < projectiles.size(); i++) {//projectiles.size does not update inside the for loop if a projectile is erased so the ones that deal with coltions have break statments afther the erase a bullet object
							projectiles[i]->Bulletmoves(player.playerShip, projectiles[i]->bullet, projectiles[i]->movmentB, projectiles[i]->mouseinput);//moves bullet
							window.draw(projectiles[i]->bullet);//draw bullets
							if (projectiles[i]->isOut(projectiles[i]->bullet) == true) {

								projectiles.erase(projectiles.begin() + i);
								//cout << projectiles.size() << endl;

								break;//breaks to updates size in the for loop

								//break; (add this to fix vector out of range errors (currently not needed))[may become a problem when the bullets are cheaked to se if they leave the screen]

							}
							//projectiles[i]->isOut(projectiles[i]->bullet);///create menory leak try to fix later DOES NOT DEALTE PROJECTILES IF OUT OF SCREEN (FIXED)
							//cheaks if bullet is out of window and if it hits
							//cheaks if hits smal ship MOVED OUTSIDE OF THE LOOP
							/*if (shipsspawned == true) {
								for (s = 0; s < smallships.size(); s++) {
									if (projectiles[i]->isDistroyed(projectiles[i]->bullet, smallships[s]->Ehealth, nosheaild, smallships[s]->evilShip) == true) {
										if (smallships[s]->Ehealth <= 0) {
											smallships.erase(smallships.begin() + s);
											spawnclock.restart();//restarts clock for new spawning
										}
										if (projectiles.size() == 1) {//if no bullets breaks the loop to stop vector out of range error
											projectiles.erase(projectiles.begin() + 0);
											break;
										}
										projectiles.erase(projectiles.begin() + i);//erases bullet if it his

										if (projectiles.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
											break;
										}
									}
								}
							}*/
						}
						//cheaks if hits small ship
						for (i = 0; i < projectiles.size(); i++) {
							if (shipsspawned == true) {
								for (s = 0; s < smallships.size(); s++) {
									if (projectiles[i]->isDistroyed(projectiles[i]->bullet, smallships[s]->Ehealth, nosheaild, smallships[s]->evilShip) == true) {
										if (smallships[s]->Ehealth <= 0) {
											smallships.erase(smallships.begin() + s);
											score += 10;//adds to score
											scoretext.setString("Score:" + to_string(score));//updataes score
											//old code for dealteing bullets
											/*projectiles.erase(projectiles.begin() + i);
											//if (projectiles.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
											//	break;
											//}*/
											//spawnclock.restart();//restarts clock for new spawning
											spawntimer = 0;
										}

										projectiles.erase(projectiles.begin() + i);//erases bullet if it his
										break;//Break's the loop to allow it to update .size function that the loops uses (with out this when two bullets hit a ship at near the same time it would give a vector out of range error)[may become a problem when the bullets are cheaked to se if they leave the screen]
										if (projectiles.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
											break;
										}



									}
								}
							}
						}
						//cheaks if hits meduim ship
						for (i = 0; i < projectiles.size(); i++) {
							if (shipsspawned == true) {
								for (p = 0; p < mediumships.size(); p++) {
									if (projectiles[i]->isDistroyed(projectiles[i]->bullet, mediumships[p]->Ehealth, nosheaild, mediumships[p]->evilShip) == true) {
										if (mediumships[p]->Ehealth <= 0) {

											mediumships.erase(mediumships.begin() + p);
											score += 20;//adds to score
											scoretext.setString("Score:" + to_string(score));//updataes score
											//old code for dealteing bullets
											/*projectiles.erase(projectiles.begin() + i);
											//if (projectiles.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
											//	break;
											//}*/
											//spawnclock.restart();//restarts clock for new spawning
																 //erases bullet if it is out of window
											spawntimer = 0;
										}

										projectiles.erase(projectiles.begin() + i);
										break;//Break's the loop to allow it to update .size function that the loops uses (with out this when two bullets hit a ship at near the same time it would give a vector out of range error)[may become a problem when the bullets are cheaked to se if they leave the screen]
										//old cheak code
										/*if (projectiles.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
										//		break;
										}*/


									}
								}
							}
						}
						//cheaks if hits large ship
						for (i = 0; i < projectiles.size(); i++) {
							if (shipsspawned == true) {
								for (L = 0; L < largeships.size(); L++) {
									if (projectiles[i]->isDistroyed(projectiles[i]->bullet, largeships[L]->Ehealth, nosheaild, largeships[L]->evilShip) == true) {
										if (largeships[L]->Ehealth <= 0) {
											largeships.erase(largeships.begin() + L);
											score += 40;//adds to score
											scoretext.setString("Score:" + to_string(score));//updataes score
											//old code for dealteing bullets
											/*projectiles.erase(projectiles.begin() + i);
											//if (projectiles.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
											//	break;
											//}*/
											//spawnclock.restart();//restarts clock for new spawning
											spawntimer = 0;
										}

										projectiles.erase(projectiles.begin() + i);//erases bullet if it is out of window
										break;//Break's the loop to allow it to update .size function that the loops uses (with out this when two bullets hit a ship at near the same time it would give a vector out of range error)[may become a problem when the bullets are cheaked to se if they leave the screen]
										//old cheak code
										/*if (projectiles.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
												break;
										}*/



									}
								}
							}
						}
					}
					//health regen
					//Healthtimer = Healthclock.getElapsedTime().asSeconds();
					Healthtimer += deltaTime;
					//uses gui.boardersizeH for max health
					if (Healthtimer > 1.0f&&player.Health < gui.boarderSizeH) {
						if (player.Health < 6) {
							HealthLow.play();//plays health is low sound
						}
						if (player.Health + 1 == gui.boarderSizeH) {
							HealthRegen.play();//plays when health is regenrated 
						}
						player.Health++;
						//Healthclock.restart();
						Healthtimer = 0;
					}
					//sheild regen
					//Sheildtimer = Sheildclock.getElapsedTime().asSeconds();
					Sheildtimer += deltaTime;
					//uses gui.boardersizeS for max Sheald
					if (Sheildtimer > 0.5f&&player.Sheald < gui.boarderSizeS) {
						if (player.Sheald + 1 == gui.boarderSizeS) {
							SheildRegen.play();//plays sheild regen sound afther it regens the last sheild point
						}
						player.Sheald++;
						//Sheildclock.restart();
						Sheildtimer = 0;
					}





					window.draw(scoretext);//draws score text

					if (spawntimer < 3.0 && smallships.size() == 0 && mediumships.size() == 0 && largeships.size() == 0) {
						//cout << "run" << endl;

						waves.setFillColor(sf::Color(0, 255, 0, waveOpacany));//changes opacany
						waveOpacany--;//reduces opancay
						window.draw(waves);//draws waves text
						waves.setString("Wave" + to_string(hardness));//updates wave text
					}
					update = false;//allow score to be updated
					updatetimer = 0;
				
				break;
			case dead:
				leader.leaderboards(score,update);//organises scores once
				leader.updateleaderboard();//updates the text file to the new scores
				leader.leaderboardText.setString("Scores\n1. " + to_string(leader.scores[0]) + "\n2. " + to_string(leader.scores[1]) + "\n3. " + to_string(leader.scores[2]) + "\n4. " + to_string(leader.scores[3]) + "\n5. " + to_string(leader.scores[4]));//updates display text
				//cout<<leader.scores[0] << endl;
				window.clear();
				window.draw(leader.leaderboardText);//draws leaderboard text
				window.draw(deadscreen);
				window.draw(restartscreen);
				break;
			default:
				break;
			}
			//clock6.restart();
		//}
		//movement
		/*
		timer = clock.getElapsedTime().asSeconds();//stores seconds past in timer
		if (timer > 0.1f)//0.1f set ofen move is updated
		{
			mover.realmove(mover.moveD, mover.mover2, mover.trust, player.playerShip);//moves ship
			clock.restart();//restarts the clock limiting how fast movement id updated
		}
		spawntimer = spawnclock.getElapsedTime().asSeconds();
		if (smallships.size()==0&&mediumships.size()==0&&largeships.size()==0) {
			shipsspawned = false;
			if (spawntimer > 6.0) {
				if (shipsspawned == false) {
					//randoms spawn
					do {
						ranc.x = randcod() % 4;
						if (ranc.x==0) {
							ranc.x = 200;
							ranc.y = 200;
						}
						else if (ranc.x == 1) {
							ranc.x = 1000;
							ranc.y = 200;
						}
						else if (ranc.x == 2) {
							ranc.x = 200;
							ranc.y = 700;
						}
						else if (ranc.x == 3) {
							ranc.x = 1000;
							ranc.y = 700;
						}
					
					} while (player.playerShip.getGlobalBounds().width == ranc.x&&player.playerShip.getGlobalBounds().height == ranc.y);
					evils* new_smallship = new evils(2, 10, "Textures/SmallevilShip_0.png", "Textures/SmallevilShip_1.png", sf::Vector2f(ranc.x, ranc.y));
					smallships.push_back(new_smallship);
					//randoms spawn
					do {
						ranc.x = randcod() % 4;
						if (ranc.x == 0) {
							ranc.x = 200;
							ranc.y = 200;
						}
						else if (ranc.x == 1) {
							ranc.x = 1000;
							ranc.y = 200;
						}
						else if (ranc.x == 2) {
							ranc.x = 200;
							ranc.y = 700;
						}
						else if (ranc.x == 3) {
							ranc.x = 1000;
							ranc.y = 700;
						}

					} while (player.playerShip.getGlobalBounds().width == ranc.x&&player.playerShip.getGlobalBounds().height == ranc.y);
					evils* new_mediumship = new evils(4, 20, "Textures/midEvilShip_0.png", "Textures/midEvilShip_1.png", sf::Vector2f(ranc.x, ranc.y));
					mediumships.push_back(new_mediumship);
					//randoms spawn
					do {
						ranc.x = randcod() % 4;
						if (ranc.x == 0) {
							ranc.x = 200;
							ranc.y = 200;
						}
						else if (ranc.x == 1) {
							ranc.x = 1000;
							ranc.y = 200;
						}
						else if (ranc.x == 2) {
							ranc.x = 200;
							ranc.y = 700;
						}
						else if (ranc.x == 3) {
							ranc.x = 1000;
							ranc.y = 700;
						}

					} while (player.playerShip.getGlobalBounds().width == ranc.x&&player.playerShip.getGlobalBounds().height == ranc.y);
					evils* new_largeship = new evils(8, 40, "Textures/evilship_0.png", "Textures/evilship_1.png", sf::Vector2f(ranc.x, ranc.y));
					largeships.push_back(new_largeship);
				}
				shipsspawned = true;
			}
		}
		//mover.realmove(mover.moveD,mover.mover2,mover.trust,player.playerShip);//moves ship
		mover.cheakBounds(player.playerShip);//sees if ship is out of bounds
		//cout << player.playerShip.getRotation()<< "   mover" << endl;
		//bs.Bulletmoves(player.playerShip,bs.bullet,bs.movmentB);
		//cout << bs.bullet.getPosition().x << endl;
		window.clear();
		window.draw(backgrounds.background);
		player.playerShip.move(mover.mover2);//moves ship
		window.draw(player.playerShip);
		//bullets shoot small ship
			timer3 = clock3.getElapsedTime().asSeconds();//resets clock
			if (timer3 > 1.0f)//0.1f set ofen you can fire
			{
				for (o = 0; o < smallships.size(); o++) {
					smallships[o]->rotate(smallships[o]->rotateBy, player.playerShip);//makes frist bullet rotae correctly
				//cout << "did" << endl;
				bullets* new_smbullet = new bullets(smallships[o]->EDamge, "Textures/small bulletOLD.png", smallships[o]->evilShip, sf::Vector2f(0, 0), player.playerShip.getPosition());//spawns bullet 
				new_smbullet->mouseinput = player.playerShip.getPosition();//sets trajectory of the bullet
				smallbullet.push_back(new_smbullet);//add new bullet to vector arry
				smcreated = 1;//stops for loop from cheaking for bullets when they dont exist
				clock3.restart();//restarts the clock limiting how fast you can fire
				}
			}
		//bullets shoot meduim ship
			timer4 = clock4.getElapsedTime().asSeconds();//resets clock
			if (timer4 > 2.0f)//0.1f set ofen you can fire
			{
				for (o = 0; o < mediumships.size(); o++) {
					mediumships[o]->rotate(mediumships[o]->rotateBy, player.playerShip);//makes frist bullet rotae correctly
					//cout << "did 2" << endl;
					bullets* new_mmbullet = new bullets(mediumships[o]->EDamge, "Textures/mid bullet.png", mediumships[o]->evilShip, sf::Vector2f(0, 0), player.playerShip.getPosition());//spawns bullet 
					new_mmbullet->mouseinput = player.playerShip.getPosition();//sets trajectory of the bullet
					mediumbullet.push_back(new_mmbullet);//add new bullet to vector arry
					mmcreated = 1;//stops for loop from cheaking for bullets when they dont exist
					clock4.restart();//restarts the clock limiting how fast you can fire
				}
			}
		//bullets shoots large ship
			timer5 = clock5.getElapsedTime().asSeconds();//resets clock
			if (timer5 > 5.0f)//0.1f set ofen you can fire
			{
				for (o = 0; o < largeships.size(); o++) {
					largeships[o]->rotate(largeships[o]->rotateBy, player.playerShip);//makes frist bullet rotae correctly
					//cout << "did 3" << endl;
					bullets* new_lgbullet = new bullets(largeships[o]->EDamge, "Textures/large bullet.png", largeships[o]->evilShip, sf::Vector2f(0, 0), player.playerShip.getPosition());//spawns bullet 
					new_lgbullet->mouseinput = player.playerShip.getPosition();//sets trajectory of the bullet
					largebullet.push_back(new_lgbullet);//add new bullet to vector arry
					lgcreated = 1;//stops for loop from cheaking for bullets when they dont exist
					clock5.restart();//restarts the clock limiting how fast you can fire
				}
			}
		//draw evil
		if (shipsspawned == true) {
			for ( j = 0; j < smallships.size(); j++) {
				smallships[j]->rotate(smallships[j]->rotateBy,player.playerShip);
				//draw and dects coltions of bullets
				if (smcreated == true) {
					//bulletcode
					for (z = 0; z < smallbullet.size(); z++)  {
						smallbullet[z]->Bulletmovesevil(smallships[j]->evilShip, smallbullet[z]->bullet, smallbullet[z]->movmentB, smallbullet[z]->mouseinput);//moves bullet//small ships to o not z (POSSABLY)[yes now fixed]
						window.draw(smallbullet[z]->bullet);//draw bullets
						//cheaking bullet out of screen
						if (smallbullet[z]->isOut(smallbullet[z]->bullet) == true) {
							smallbullet.erase(smallbullet.begin() + z);//dealtes bullet
							if (smallbullet.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
								break;
							}
						}
					}
					//cheaks if hits player
					for (z = 0; z < smallbullet.size(); z++) {
						//cheaking bullet hit player
						if (smallbullet[z]->isDistroyed(smallbullet[z]->bullet, player.Health, player.Sheald, player.playerShip) == true) {
							if (player.Sheald <= 0) {
								player.playerShip.setTexture(player.shipNM);
							}

							if (player.Health <= 0) {
								//if player dead kills player
								player.playerShip.setTexture(smallships[0]->EvilNM);
							}
						
							//cout << player.Sheald << "sheald"<<endl;
							//cout << player.Health << "health" << endl;
							smallbullet.erase(smallbullet.begin() + z);
						}
					}
					
				}
				window.draw(smallships[j]->evilShip);
			}
			for ( y = 0; y < mediumships.size(); y++) {
				mediumships[y]->rotate(mediumships[y]->rotateBy, player.playerShip);
				//dects bullet coltion
				if (mmcreated == 1) {
					for (z = 0; z < mediumbullet.size(); z++) {
						mediumbullet[z]->Bulletmovesevil(mediumships[y]->evilShip, mediumbullet[z]->bullet, mediumbullet[z]->movmentB, mediumbullet[z]->mouseinput);//moves bullet//small ships to o not z (POSSABLY)[yes now fixed]
						window.draw(mediumbullet[z]->bullet);//draw bullets
															//cheaking bullet out of screen
						if (mediumbullet[z]->isOut(mediumbullet[z]->bullet) == true) {
							mediumbullet.erase(mediumbullet.begin() + z);//dealtes bullet
							if (mediumbullet.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
								break;
							}
						}
					}
					//cheaks if hits player
					for (z = 0; z < mediumbullet.size(); z++) {
						//cheaking bullet hit player
						if (mediumbullet[z]->isDistroyed(mediumbullet[z]->bullet, player.Health, player.Sheald, player.playerShip) == true) {
							if (player.Sheald <= 0) {
								player.playerShip.setTexture(player.shipNM);
							}

							if (player.Health <= 0) {
								//if player dead kills player
								player.playerShip.setTexture(mediumships[0]->EvilNM);
							}

							//cout << player.Sheald << "sheald" << endl;
							//cout << player.Health << "health" << endl;
							mediumbullet.erase(mediumbullet.begin() + z);
						}
					}
				}
				window.draw(mediumships[y]->evilShip);
			}
			for ( k = 0; k < largeships.size(); k++) {
				largeships[k]->rotate(largeships[k]->rotateBy, player.playerShip);
				if (lgcreated == 1) {
					for (z = 0; z < largebullet.size(); z++) {
						largebullet[z]->Bulletmovesevil(largeships[k]->evilShip, largebullet[z]->bullet, largebullet[z]->movmentB, largebullet[z]->mouseinput);//moves bullet//small ships to o not z (POSSABLY)[yes now fixed]
						window.draw(largebullet[z]->bullet);//draw bullets
															 //cheaking bullet out of screen
						if (largebullet[z]->isOut(largebullet[z]->bullet) == true) {
							largebullet.erase(largebullet.begin() + z);//dealtes bullet
							if (largebullet.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
								break;
							}
						}
					}
					//cheaks if hits player
					for (z = 0; z < largebullet.size(); z++) {
						//cheaking bullet hit player
						if (largebullet[z]->isDistroyed(largebullet[z]->bullet, player.Health, player.Sheald, player.playerShip) == true) {
							if (player.Sheald <= 0) {
								player.playerShip.setTexture(player.shipNM);
							}

							if (player.Health <= 0) {
								//if player dead kills player
								player.playerShip.setTexture(largeships[0]->EvilNM);
							}

							//cout << player.Sheald << "sheald" << endl;
							//cout << player.Health << "health" << endl;
							largebullet.erase(largebullet.begin() + z);
						}
					}
				}
				window.draw(largeships[k]->evilShip);
			}
		}
		//cycles though player bullets and draws them
		if (created == 1) {
			for (i = 0; i < projectiles.size(); i++) {
				projectiles[i]->Bulletmoves(player.playerShip, projectiles[i]->bullet, projectiles[i]->movmentB, projectiles[i]->mouseinput);//moves bullet
				window.draw(projectiles[i]->bullet);//draw bullets
				if (projectiles[i]->isOut(projectiles[i]->bullet) == true) {
					projectiles.erase(projectiles.begin() + i);
					if (projectiles.size() == 0) {//if no bullets breaks the loop to stop vector out of range error
						break;
					}
				}
				//projectiles[i]->isOut(projectiles[i]->bullet);///create menory leak try to fix later DOES NOT DEALTE PROJECTILES IF OUT OF SCREEN (FIXED)
				//cheaks if bullet is out of window and if it hits
				//cheaks if hits smal ship
				if (shipsspawned == true) {
					for (s = 0; s < smallships.size(); s++) {
						if (projectiles[i]->isDistroyed(projectiles[i]->bullet, smallships[s]->Ehealth, nosheaild, smallships[s]->evilShip) == true) {
							if (smallships[s]->Ehealth <= 0) {
								smallships.erase(smallships.begin() + s);
								spawnclock.restart();//restarts clock for new spawning
							}
							projectiles.erase(projectiles.begin() + i);//erases bullet if it his
						}
					}
				}
			}

				//cheaks if hits meduim ship
			for (i = 0; i < projectiles.size(); i++) {
				if (shipsspawned == true) {
					for (p = 0; p < mediumships.size(); p++) {
						if (projectiles[i]->isDistroyed(projectiles[i]->bullet, mediumships[p]->Ehealth, nosheaild, mediumships[p]->evilShip) == true) {
							if (mediumships[p]->Ehealth <= 0) {
								mediumships.erase(mediumships.begin() + p);
								spawnclock.restart();//restarts clock for new spawning
								//erases bullet if it is out of window
							}
							projectiles.erase(projectiles.begin() + i);
						}
					}
				}
			}
					//cheaks if hits large ship
			for (i = 0; i < projectiles.size(); i++) {
				if (shipsspawned == true) {
					for (L = 0; L < largeships.size(); L++) {
						if (projectiles[i]->isDistroyed(projectiles[i]->bullet, largeships[L]->Ehealth, nosheaild, largeships[L]->evilShip) == true) {
							if (largeships[L]->Ehealth <= 0) {
								largeships.erase(largeships.begin() + L);\
									spawnclock.restart();//restarts clock for new spawning
							}
							projectiles.erase(projectiles.begin() + i);//erases bullet if it is out of window
						}
					}
				}
			}

			
				
			
		}
		*/
			//window.draw(bs.bullet);
			window.display();
		
	}
}