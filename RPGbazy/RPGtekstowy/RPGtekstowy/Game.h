#pragma once

#include "Functions.h"
#include "Character.h"
#include <iomanip>
#include <ctime>
#include <vector>

class Game {
public:
	Game();
	virtual ~Game();

	//Operators

	//Functions
	void mainMenu();
	void newGame();
	void help();
	void setSex(string race);
	void setName(string race, string gender);
	void play();
	void loadGame();

	//Accessors
	inline bool getPlaying() const { return this -> playing; }
	//Modifiers

private:
	int choice;
	bool playing;
	bool pomoc;
	string rasa;
	string sex;
	string name;
};

