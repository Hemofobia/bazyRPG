#include"Game.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));
	Game game;

	if (game.getPlaying()) {
		game.mainMenu();
	}
	return 0;
}