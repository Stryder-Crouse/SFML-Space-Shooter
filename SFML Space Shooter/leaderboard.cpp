#include "leaderboard.h"

void leaderB::getleaderboard()
{
	fstream leaderboard;//filestream object
	leaderboard.open("Leaderboard.txt", ios::in);//io::in allow input 
	if (leaderboard.is_open()) {//while file is open
	
		getline(leaderboard, buffer[0]);//reads frist line and sends it to a string
		scores[0]=stoi(buffer[0]);//string is then changed to int and stored in score
		//cout << scores[0] << "this is " << endl;
		getline(leaderboard, buffer[1]);//reads second line and sends it to a string
		scores[1] = stoi(buffer[1]);//string is then changed to int and stored in score

		getline(leaderboard, buffer[2]);//reads 3 line and sends it to a string
		scores[2] = stoi(buffer[2]);//string is then changed to int and stored in score

		getline(leaderboard, buffer[3]);//reads 4 line and sends it to a string
		scores[3] = stoi(buffer[3]);//string is then changed to int and stored in score

		getline(leaderboard, buffer[4]);//reads 5 line and sends it to a string
		scores[4] = stoi(buffer[4]);//string is then changed to int and stored in score

	}
	leaderboard.close();//writes changes to disk and does other things
}

void leaderB::leaderboards(int newscore, bool &update)
{
	if (update == false) {//allow leader board to be updated only once
		if (newscore > scores[0]) {
			scores[4] = scores[3];//organisase scores based on how hight the new score is
			scores[3] = scores[2];
			scores[2] = scores[1];
			scores[1] = scores[0];
			scores[0] = newscore;
		}
		else if (newscore > scores[1]) {
			scores[4] = scores[3];//organisase scores based on how hight the new score is
			scores[3] = scores[2];
			scores[2] = scores[1];
			scores[1] = newscore;
		}
		else if (newscore > scores[2]) {
			scores[4] = scores[3];//organisase scores based on how hight the new score is
			scores[3] = scores[2];
			scores[2] = newscore;
		}
		else if (newscore > scores[3]) {
			scores[4] = scores[3];//organisase scores based on how hight the new score is
			scores[3] = newscore;
		}
		else if (newscore > scores[4]) {
			scores[4] = newscore;//organisase scores based on how hight the new score is

		}
		update = true;//stops leaderboard from beaging updated again
	}
}

void leaderB::updateleaderboard()
{
	fstream leaderboard;
	leaderboard.open("Leaderboard.txt", ios::out);//ios::out is for output
	if (leaderboard.is_open()) {//stores sorces back into the text file
		leaderboard << scores[0]<< endl;
		leaderboard << scores[1] << endl;
		leaderboard << scores[2] << endl;
		leaderboard << scores[3] << endl;
		leaderboard << scores[4] << endl;
	}

	leaderboard.close();//writes changes to disk
}

void leaderB::makeleaderboadtext()
{
	leaderfont.loadFromFile("Font/BlackOpsOne-Regular.ttf");//set the font to the myfount varable

	leaderboardText.setFont(leaderfont);//set font to text
	leaderboardText.setString("Scores\n1. " + to_string(scores[0]) + "\n2. " + to_string(scores[1]) + "\n3. " + to_string(scores[2]) + "\n4. " + to_string(scores[3]) + "\n5. " + to_string(scores[4]));//sets text to text
	leaderboardText.setCharacterSize(36);//sets size of text
	leaderboardText.setFillColor(sf::Color::Blue);//sets color of text
	leaderboardText.setPosition(0, 0);
}


