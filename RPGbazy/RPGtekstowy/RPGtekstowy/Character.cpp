#include "Character.h"

Character::Character(){
	name = "none";
	race = "none";

}

Character::~Character(){

}
void createCharacter(string r, string p, string i) {
	string rasa = r;
	string plec = p;
	string imie = i;
	MYSQL mysql;
	mysql_init(&mysql);
	mysql_real_connect(&mysql, "localhost", "root", "password", "rpg", 0, NULL, 0);
	mysql_query(&mysql, "INSERT ");
}