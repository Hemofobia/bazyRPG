#include "Game.h"

Game::Game() {
	choice = 0;
	playing = true;
	pomoc = false;
}

Game::~Game() {

}

//Functions
void Game::mainMenu() {
	cout << "Menu G³ówne" << endl << endl;
	cout << "1: Nowa gra" << endl;
	cout << "2: Wczytaj grê" << endl;
	cout << "0: Wy³¹cz grê" << endl;
	cout << endl << "Wybór: ";
	cin >> choice;
	system("cls");
	switch (choice) {
	case 1:
		Game::newGame();
		break;
	case 2:
		break;
	case 0:
		playing = false;
		break;
	default:
		break;
	}
}
void Game::newGame() {
	cout << "Witaj na pocz¹tku swej œcie¿ki m³ody Poszukiwaczu Przygód." << endl
		<< "Ju¿ nied³ugo przeniesiesz siê do wspania³ego œwiata, zamieszka³ego przez liczne fantastyczne stworzenia" << endl
		<< "z³owrogie bestie i krwio¿ercze potwory." << endl
		<< "Tylko od Ciebie zale¿y kim siê staniesz i jak potocz¹ siê Twoje dalsze losy." << endl
		<< "Lecz zanim stworzysz swoj¹ postaæ pragnê Ciê ostrzec" << endl << endl
		<< "JEŒLI ŒMIERÆ CIÊ DOPADNIE, NIE DOSTANIESZ DRUGIEJ SZANSY, DLATEGO B¥D OSTRO¯NY..." << endl
		<< "NIEBEZPIECZEÑSTWO MO¯E SIÊ CZAIÆ ZA KA¯DYM KROKIEM!!!" << endl << endl
		<< "Nie zra¿aj siê jednak, lecz pamiêtaj, ¿e aby staæ siê kimœ wielkim, nie ma drogi na skróty!" << endl 
		<< "A teraz wybierz jak¹ ras¹ chcesz zagraæ (jeœli grasz w t¹ grê po raz pierwszy wybierz 6):"<< endl << endl;
	cout << "1: Cz³owiek (atrybuty pocz¹tkowe: zdrowie: 12, mana: 12, si³a: 12, magia: 12, zrêcznoœæ: 12, kondycja: 12" << endl;
	cout << "2: Elf (atrybuty pocz¹tkowe: zdrowie: 10, mana: 16, si³a: 10, magia: 14, zrêcznoœæ: 14, kondycja: 10" << endl;
	cout << "3: Pó³elf (atrybuty pocz¹tkowe: zdrowie: 11, mana: 14, si³a: 11, magia: 13, zrêcznoœæ: 13, kondycja: 11" << endl;
	cout << "4: Krasnolud (atrybuty pocz¹tkowe: zdrowie: 16, mana: 8, si³a: 15, magia: 9, zrêcznoœæ: 11, kondycja: 13" << endl;
	cout << "5: Wró¿ka (atrybuty pocz¹tkowe: zdrowie: 8, mana: 20, si³a: 8, magia: 18, zrêcznoœæ: 13, kondycja: 9" << endl;
	cout << "6: Pomoc" << endl;
	cout << "9: Wróæ do menu" << endl;
	cout << "0: WyjdŸ z gry" << endl;
	cout << endl << "Wybór: ";
	cin >> choice;
	system("cls");
	switch (choice){
	case 1:
		cout << "Czy na pewno cz³owiek jest Twoim wyborem?" << endl << endl;
		cout << "1: Tak" << endl;
		cout << "2: Nie" << endl;
		cout << endl << "Wybór: ";
		do {
			cin >> choice;
			if (choice == 1) {
				//dodaj rasê i statystyki do bazy
				system("cls");
				rasa = "Cz³owiek";
				Game::setSex(rasa);
			}
			else if (choice == 2) {
				system("cls");
				Game::newGame();
			}
			else {
				cout << "Z³a wartoœæ";
			}
		} while (choice!=1 || choice!=2);
		break;
	case 2:
		cout << "Czy na pewno elf jest Twoim wyborem?" << endl << endl;
		cout << "1: Tak" << endl;
		cout << "2: Nie" << endl;
		cout << endl << "Wybór: ";
		do {
			cin >> choice;
			if (choice == 1) {
				//dodaj rasê i statystyki do bazy
				system("cls");
				rasa = "Elf";
				Game::setSex(rasa);
			}
			else if (choice == 2) {
				system("cls");
				Game::newGame();
			}
			else cout << "Z³a wartoœæ";
		} while (choice != 1 || choice != 2);
		break;
	case 3:
		cout << "Czy na pewno pó³elf jest Twoim wyborem?" << endl << endl;
		cout << "1: Tak" << endl;
		cout << "2: Nie" << endl;
		cout << endl << "Wybór: ";
		do {
			cin >> choice;
			if (choice == 1) {
				//dodaj rasê i statystyki do bazy
				system("cls");
				rasa = "Pó³elf";
				Game::setSex(rasa);
			}
			else if (choice == 2) {
				system("cls");
				Game::newGame();
			}
			else cout << "Z³a wartoœæ";
		} while (choice != 1 || choice != 2);
		break;
	case 4:
		cout << "Czy na pewno krasnolud jest Twoim wyborem?" << endl << endl;
		cout << "1: Tak" << endl;
		cout << "2: Nie" << endl;
		cout << endl << "Wybór: ";
		do {
			cin >> choice;
			if (choice == 1) {
				//dodaj rasê i statystyki do bazy
				system("cls");
				rasa = "Krasnolud";
				Game::setSex(rasa);
			}
			else if (choice == 2) {
				system("cls");
				Game::newGame();
			}
			else cout << "Z³a wartoœæ";
		} while (choice != 1 || choice != 2);
		break;
	case 5:
		cout << "Czy na pewno wró¿ka jest Twoim wyborem?" << endl << endl;
		cout << "1: Tak" << endl;
		cout << "2: Nie" << endl;
		cout << endl << "Wybór: ";
		do {
			cin >> choice;
			if (choice == 1) {
				//dodaj rasê i statystyki do bazy
				system("cls");
				rasa = "Wró¿ka";
				Game::setSex(rasa);
			}
			else if (choice == 2) {
				system("cls");
				Game::newGame();
			}
			else cout << "Z³a wartoœæ";
		} while (choice != 1 || choice != 2);
		break;
	case 6:
		pomoc = true;
		do {
			Game::help();
			
		} while (pomoc);
		system("cls");
		Game::newGame();
		break;
	case 9:
		Game::mainMenu();
		break;
	case 0:
		playing = false;
		break;
	default:
		break;
	}
}
void Game::help() {
	cout << "ZDROWIE - okreœla ¿ywotnoœæ Twojej postaci, im wiêcej zdrowia ma postaæ" << endl
		<< "          tym wiêcej obra¿eñ mo¿e przyj¹æ nim padnie z wycieñczenia i umrze." << endl
		<< "          Maksymalne ZDROWIE:" << endl
		<< "          ZDROWIE pocz¹tkowe + level postaci*(1/3 ZDROWIE pocz¹tkowe) + modyfikator(KONDYCJA)" << endl
		<< "MANA - okreœla poziom energii magicznej Twojej postaci, im wiêcej many ma postaæ" << endl
		<< "       tym wiêcej czarów mo¿e rzuciæ. Potê¿niejsze zaklêcia mog¹ wymagaæ wiêcej many!" << endl
		<< "       Maksymalna MANA:" << endl
		<< "       MANA pocz¹tkowa + level postaci*(1/4 MANA pocz¹tkowa) + modyfikator(MAGIA)" << endl
		<< "SI£A - okreœla jak silna jest Twoja postaæ. Si³a wp³ywa na obra¿enia zadawane broni¹," << endl
		<< "       do której u¿wania niezbêdny jest ten atrybut, a tak¿e na modyfikator obra¿eñ" << endl
		<< "       krytycznych (maksymalna wartoœæ: Obra¿enia x2,5)" << endl
		<< "       modyfikator_obra¿enia(SI£A) = 1/4 maksymalna SI£A" << endl
		<< "       modyfikator_krytyków(SI£A) = 1,5 + 1/100 maksymalna SI£A" << endl
		<< "MAGIA - wp³ywa na maksymalny poziom MANY postaci, a tak¿e na obra¿enia od zaklêæ." << endl
		<< "        modyfikator_obra¿eñ(MAGIA) = 1/3 maksymalna MAGIA" << endl
		<< "        modyfikator(MAGIA) = 1/4 dodatkowe punkty MAGIA"
		<< "ZRÊCZNOŒÆ - okreœla jak zrêczna jest Twoja postaæ. Zrêcznoœæ wp³ywa na obra¿enia" << endl
		<< "            zadawane broni¹, do której u¿ywania niezbêdny jest ten atrybut, a tak¿e" << endl
		<< "            na szansê trafienia krytycznego (Obra¿enia x1,5, maksymalna wartoœæ: 75%)." << endl
		<< "            modyfikator_obra¿enia(ZRÊCZNOŒÆ) = 1/4 maksymalna ZRÊCZNOŒÆ" << endl
		<< "            modyfikator_krytyków(ZRÊCZNOŒÆ) = (1/2 maksymalna ZRÊCZNOŒÆ)%" << endl
		<< "KONDYCJA - okreœla bonus do maksymalnego zdrowia i odpornoœæ postaci na negatywne" << endl
		<< "           efekty(maksymalna wartoœæ: 85%)"
		<< "           modyfikator(KONDYCJA) = 1/3 dodatkowa KONDYCJA" << endl
		<< "           modyfikator_odpornoœæ(KONDYCJA) = 10% + (1/2 maksymalna KONDYCJA)%" << endl << endl;
	cout << "Kliknij 0 aby kontynuowæ" << endl;
	cin >> choice;
	if (choice == 0) pomoc = false;
}
void Game::setSex(string race) {
	string char_race = race;
	system("cls");
	cout << rasa << endl << "Wybierz p³eæ postaci." << endl << endl
		<< "1: Kobieta" << endl
		<< "2: Mê¿czyzna" << endl;
	cout << "9: Wróæ do menu" << endl;
	cout << "0: WyjdŸ z gry" << endl;
	cout << endl << "Wybór: ";
	cin >> choice;
	system("cls");
	switch (choice) {
	case 1:
		cout << "Czy na pewno kobieta jest Twoim wyborem?" << endl << endl;
		cout << "1: Tak" << endl;
		cout << "2: Nie" << endl;
		cout << endl << "Wybór: ";
		do {
			cin >> choice;
			if (choice == 1) {
				//dodaj p³eæ
				system("cls");
				sex = "Kobieta";
				Game::setName(char_race, sex);
			}
			else if (choice == 2) {
				system("cls");
				Game::setSex(char_race);
			}
			else cout << "Z³a wartoœæ";
		} while (choice != 1 || choice != 2);
		break;
	case 2:
		cout << "Czy na pewno mê¿czyzna jest Twoim wyborem?" << endl << endl;
		cout << "1: Tak" << endl;
		cout << "2: Nie" << endl;
		cout << endl << "Wybór: ";
		do {
			cin >> choice;
			if (choice == 1) {
				//dodaj p³eæ
				system("cls");
				sex = "Mê¿czyzna";
				Game::setName(char_race, sex);
			}
			else if (choice == 2) {
				system("cls");
				Game::setSex(rasa);
			}
			else cout << "Z³a wartoœæ";
		} while (choice != 1 || choice != 2);
		break;
	case 9:
		Game::mainMenu();
		break;
	case 0:
		playing = false;
		break;
	default:
		break;
	}
}
void Game::setName(string race, string gender) {
	string char_race = race;
	string char_sex = gender;
	system("cls");
	cout << char_race << " " << char_sex << endl;
	cout << "WprowadŸ imiê swojej postaci:" << endl << endl;
	cin >> name;
	system("cls");
	cout << "Czy na pewno imiê Twojej postaci to: " << name << "?" << endl;
	cout << endl << "1: Tak" << endl;
	cout << "2: Nie" << endl;
	cout << endl << "Wybór: ";
	do {
		cin >> choice;
		if (choice == 1) {
			//dodaj imiê
			system("cls");
			//Character::createCharacter(char_race, sex, name);
		}
		else if (choice == 2) {
			system("cls");
			Game::setName(char_race, char_sex);
		}
		else cout << "Z³a wartoœæ";
	} while (choice != 1 || choice != 2);
}