#include "Game.h"

Game::Game() {
	choice = 0;
	playing = false;
}

Game::~Game() {

}

//Functions
void Game::mainMenu() {
	cout << "Menu G³ówne" << endl;
	cout << "0: Nowa gra" << endl;
	cout << "1: Wczytaj grê" << endl;
	cout << "2: Wy³¹cz grê" << endl;

	cin >> choice;
	switch (choice) {
	case 0:
		playing = true;
		break;
	default:
		break;
	}
}