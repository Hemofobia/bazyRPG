#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Functions.h"
#include <iomanip>
#include <ctime>

using namespace std;

class Game {
public:
	Game();
	virtual ~Game();

	//Operators

	//Functions
	void mainMenu();

	//Accessors
	inline bool getPlaying() const { return this - playing; }
	//Modifiers

private:
	int choice;
	bool playing;
};

