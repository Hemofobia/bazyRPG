#pragma once

#include "Character.h"
#include "Functions.h"
#include <iomanip>
#include <ctime>

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

