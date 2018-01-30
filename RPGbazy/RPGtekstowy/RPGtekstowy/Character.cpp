#include "Character.h"

Character::Character(){
	name = "none";
	race = "none";

}

Character::~Character(){

}
void Character::createCharacter(string r, string p, string i) {
	string rasa = r;
	string plec = p;
	string imie = i;
	sqlite3 *db;
	int rc;
	rc = sqlite3_open("E:\sqlite\rpg.db", &db);
	if (rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
			}
	else {
		fprintf(stderr, "Opened database successfully\n");
	}
	sqlite3_close(db);
}