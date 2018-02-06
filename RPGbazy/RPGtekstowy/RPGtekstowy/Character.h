#pragma once

#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
#include "sqlite3.h"
#include <Windows.h>

using namespace std;

class Character{
public:
	Character();
	virtual ~Character();

	//Function
	void createCharacter(string r, string p, string i);
	//Accessors

	//Modifier

private:
	int choice;
	int xPos;
	int yPos;
	string map;
	string name;
	string race;
	string sex;
	int level;
	double exp, exp2nextLVL;
	int hp, maxHP;
	int mp, maxMP;
	int str;
	int mgc;
	int dex;
	int con;
};

