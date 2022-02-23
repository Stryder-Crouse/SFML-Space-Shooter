#pragma once
#include "Imports.h"

class leaderB {
public:
	sf::Font leaderfont;//stores leaderboard font
	sf::Text leaderboardText;//stores leader board text
	int scores[5]{0,0,0,0,0};//stores scores
	string buffer[5];//stores scores as string then passes them to ints ( scores)
	void getleaderboard();//get scores for leader board from file
	void leaderboards(int newscore, bool &update);//organisaion scores and accepts new input of scores
	void updateleaderboard();//updates the textfile to the new scores
	void makeleaderboadtext();//set text font and size for leaderboard
	
};