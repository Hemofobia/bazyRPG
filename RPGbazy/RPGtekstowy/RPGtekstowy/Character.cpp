#include "Character.h"
#include "Functions.h"
#include "Game.h"

Character::Character(){
	name = "none";
	race = "none";
	sex = "none";
	map = "none";
	xPos = 0;
	yPos = 0;
	level = 0;
	exp = 0;
	exp2nextLVL = 100 * pow(2, level);
	choice = 0;
}

Character::~Character(){

}
void Character::createCharacter(string r, string p, string i) {
	Game game;
	string race = r;
	string sex = p;
	string name = i;
	sqlite3 *db;
	sqlite3_open("rpg.db", &db);
	string createQuery = "CREATE TABLE IF NOT EXISTS characters(name varchar(30) NOT NULL PRIMARY KEY UNIQUE,rasa varchar(20) NOT NULL,plec varchar(10) NOT NULL,hp INT NOT NULL,maxHP INT NOT NULL,mp INT NOT NULL,maxMP INT NOT NULL,str INT NOT NULL,mgc INT NOT NULL,dex INT NOT NULL,con INT NOT NULL,exp INT NOT NULL,level INT NOT NULL,xPos INT NOT NULL,yPos INT NOT NULL,map varchar(50));";
	sqlite3_stmt *createStmt;
	cout << "Dodawanie postaci do bazy" << endl;
	sqlite3_prepare(db, createQuery.c_str(), createQuery.size(), &createStmt, NULL);
	if (sqlite3_step(createStmt) != SQLITE_DONE) cout << "Nie stworzono tabeli" << endl;
	string insertQuery;
	if (race == "Cz³owiek") {
		hp = 12; maxHP = 12;
		mp = 12; maxMP = 12;
		str = 12;
		mgc = 12;
		dex = 12;
		con = 12;
		insertQuery = "INSERT INTO characters(name,rasa,plec,hp,maxHP,mp,maxMP,str,mgc,dex,con,exp,level,xPos,yPos,map) VALUES(\'" + name + "\',\'" + race + "\',\'" + sex + "\',12,12,12,12,12,12,12,12,0,0,0,0,\'none\');";
	} else if (race == "Elf") {
		hp = 10; maxHP = 10;
		mp = 16; maxMP = 16;
		str = 10;
		mgc = 14;
		dex = 14;
		con = 10;
		insertQuery = "INSERT INTO characters(name,rasa,plec,hp,maxHP,mp,maxMP,str,mgc,dex,con,exp,level,xPos,yPos,map) VALUES(\'" + name + "\',\'" + race + "\',\'" + sex + "\',10,10,16,16,10,14,14,10,0,0,0,0,\'none\');";
	} else if (race == "Pó³elf") {
		hp = 11; maxHP = 11;
		mp = 14; maxMP = 14;
		str = 11;
		mgc = 13;
		dex = 13;
		con = 11;
		insertQuery = "INSERT INTO characters(name,rasa,plec,hp,maxHP,mp,maxMP,str,mgc,dex,con,exp,level,xPos,yPos,map) VALUES(\'" + name + "\',\'" + race + "\',\'" + sex + "\',11,11,14,14,11,13,13,11,0,0,0,0,\'none\');";
	} else if (race == "Krasnolud") {
		hp = 16; maxHP = 16;
		mp = 8; maxMP = 8;
		str = 15;
		mgc = 9;
		dex = 11;
		con = 13;
		insertQuery = "INSERT INTO characters(name,rasa,plec,hp,maxHP,mp,maxMP,str,mgc,dex,con,exp,level,xPos,yPos,map) VALUES(\'" + name + "\',\'" + race + "\',\'" + sex + "\',16,16,8,8,12,12,12,12,0,0,0,0,\'none\');";
	} else if (race == "Wró¿ka") {
		hp = 8; maxHP = 8;
		mp = 20; maxMP = 20;
		str = 8;
		mgc = 18;
		dex = 13;
		con = 9;
		insertQuery = "INSERT INTO characters(name,rasa,plec,hp,maxHP,mp,maxMP,str,mgc,dex,con,exp,level,xPos,yPos,map) VALUES(\'" + name + "\',\'" + race + "\',\'" + sex + "\',8,8,20,20,8,18,13,9,0,0,0,0,\'none\');";
	}
	sqlite3_stmt *insertStmt;
	sqlite3_prepare(db, insertQuery.c_str(), insertQuery.size(), &insertStmt, NULL);
	if (sqlite3_step(insertStmt) != SQLITE_DONE) {
		system("cls");
		cout << "Imiê ju¿ zajête" << endl;
		Sleep(3000);
		game.setName(race, sex);
	} else cout << "Dodano postaæ!" << endl;
	sqlite3_close(db);
	cout << "1. Zacznij przygodê!" << endl;
	cout << "0. WyjdŸ z gry" << endl;
	cout << endl << "Wybór: ";
	cin >> choice;
	system("cls");
	switch (choice) {
	case 1:
		game.play();
	case 0:
		exit(0);
	}
	
}