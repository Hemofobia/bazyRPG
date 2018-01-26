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
	cout << "Menu G��wne" << endl << endl;
	cout << "1: Nowa gra" << endl;
	cout << "2: Wczytaj gr�" << endl;
	cout << "0: Wy��cz gr�" << endl;
	cout << endl << "Wyb�r: ";
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
	cout << "Witaj na pocz�tku swej �cie�ki m�ody Poszukiwaczu Przyg�d." << endl
		<< "Ju� nied�ugo przeniesiesz si� do wspania�ego �wiata, zamieszka�ego przez liczne fantastyczne stworzenia" << endl
		<< "z�owrogie bestie i krwio�ercze potwory." << endl
		<< "Tylko od Ciebie zale�y kim si� staniesz i jak potocz� si� Twoje dalsze losy." << endl
		<< "Lecz zanim stworzysz swoj� posta� pragn� Ci� ostrzec" << endl << endl
		<< "JE�LI �MIER� CI� DOPADNIE, NIE DOSTANIESZ DRUGIEJ SZANSY, DLATEGO B�D� OSTRO�NY..." << endl
		<< "NIEBEZPIECZE�STWO MO�E SI� CZAI� ZA KA�DYM KROKIEM!!!" << endl << endl
		<< "Nie zra�aj si� jednak, lecz pami�taj, �e aby sta� si� kim� wielkim, nie ma drogi na skr�ty!" << endl 
		<< "A teraz wybierz jak� ras� chcesz zagra� (je�li grasz w t� gr� po raz pierwszy wybierz 6):"<< endl << endl;
	cout << "1: Cz�owiek (atrybuty pocz�tkowe: zdrowie: 12, mana: 12, si�a: 12, magia: 12, zr�czno��: 12, kondycja: 12" << endl;
	cout << "2: Elf (atrybuty pocz�tkowe: zdrowie: 10, mana: 16, si�a: 10, magia: 14, zr�czno��: 14, kondycja: 10" << endl;
	cout << "3: P�elf (atrybuty pocz�tkowe: zdrowie: 11, mana: 14, si�a: 11, magia: 13, zr�czno��: 13, kondycja: 11" << endl;
	cout << "4: Krasnolud (atrybuty pocz�tkowe: zdrowie: 16, mana: 8, si�a: 15, magia: 9, zr�czno��: 11, kondycja: 13" << endl;
	cout << "5: Wr�ka (atrybuty pocz�tkowe: zdrowie: 8, mana: 20, si�a: 8, magia: 18, zr�czno��: 13, kondycja: 9" << endl;
	cout << "6: Pomoc" << endl;
	cout << "9: Wr�� do menu" << endl;
	cout << "0: Wyjd� z gry" << endl;
	cout << endl << "Wyb�r: ";
	cin >> choice;
	system("cls");
	switch (choice){
	case 1:
		cout << "Czy na pewno cz�owiek jest Twoim wyborem?" << endl << endl;
		cout << "1: Tak" << endl;
		cout << "2: Nie" << endl;
		cout << endl << "Wyb�r: ";
		do {
			cin >> choice;
			if (choice == 1) {
				//dodaj ras� i statystyki do bazy
				system("cls");
				rasa = "Cz�owiek";
				Game::setSex(rasa);
			}
			else if (choice == 2) {
				system("cls");
				Game::newGame();
			}
			else {
				cout << "Z�a warto��";
			}
		} while (choice!=1 || choice!=2);
		break;
	case 2:
		cout << "Czy na pewno elf jest Twoim wyborem?" << endl << endl;
		cout << "1: Tak" << endl;
		cout << "2: Nie" << endl;
		cout << endl << "Wyb�r: ";
		do {
			cin >> choice;
			if (choice == 1) {
				//dodaj ras� i statystyki do bazy
				system("cls");
				rasa = "Elf";
				Game::setSex(rasa);
			}
			else if (choice == 2) {
				system("cls");
				Game::newGame();
			}
			else cout << "Z�a warto��";
		} while (choice != 1 || choice != 2);
		break;
	case 3:
		cout << "Czy na pewno p�elf jest Twoim wyborem?" << endl << endl;
		cout << "1: Tak" << endl;
		cout << "2: Nie" << endl;
		cout << endl << "Wyb�r: ";
		do {
			cin >> choice;
			if (choice == 1) {
				//dodaj ras� i statystyki do bazy
				system("cls");
				rasa = "P�elf";
				Game::setSex(rasa);
			}
			else if (choice == 2) {
				system("cls");
				Game::newGame();
			}
			else cout << "Z�a warto��";
		} while (choice != 1 || choice != 2);
		break;
	case 4:
		cout << "Czy na pewno krasnolud jest Twoim wyborem?" << endl << endl;
		cout << "1: Tak" << endl;
		cout << "2: Nie" << endl;
		cout << endl << "Wyb�r: ";
		do {
			cin >> choice;
			if (choice == 1) {
				//dodaj ras� i statystyki do bazy
				system("cls");
				rasa = "Krasnolud";
				Game::setSex(rasa);
			}
			else if (choice == 2) {
				system("cls");
				Game::newGame();
			}
			else cout << "Z�a warto��";
		} while (choice != 1 || choice != 2);
		break;
	case 5:
		cout << "Czy na pewno wr�ka jest Twoim wyborem?" << endl << endl;
		cout << "1: Tak" << endl;
		cout << "2: Nie" << endl;
		cout << endl << "Wyb�r: ";
		do {
			cin >> choice;
			if (choice == 1) {
				//dodaj ras� i statystyki do bazy
				system("cls");
				rasa = "Wr�ka";
				Game::setSex(rasa);
			}
			else if (choice == 2) {
				system("cls");
				Game::newGame();
			}
			else cout << "Z�a warto��";
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
	cout << "ZDROWIE - okre�la �ywotno�� Twojej postaci, im wi�cej zdrowia ma posta�" << endl
		<< "          tym wi�cej obra�e� mo�e przyj�� nim padnie z wycie�czenia i umrze." << endl
		<< "          Maksymalne ZDROWIE:" << endl
		<< "          ZDROWIE pocz�tkowe + level postaci*(1/3 ZDROWIE pocz�tkowe) + modyfikator(KONDYCJA)" << endl
		<< "MANA - okre�la poziom energii magicznej Twojej postaci, im wi�cej many ma posta�" << endl
		<< "       tym wi�cej czar�w mo�e rzuci�. Pot�niejsze zakl�cia mog� wymaga� wi�cej many!" << endl
		<< "       Maksymalna MANA:" << endl
		<< "       MANA pocz�tkowa + level postaci*(1/4 MANA pocz�tkowa) + modyfikator(MAGIA)" << endl
		<< "SI�A - okre�la jak silna jest Twoja posta�. Si�a wp�ywa na obra�enia zadawane broni�," << endl
		<< "       do kt�rej u�wania niezb�dny jest ten atrybut, a tak�e na modyfikator obra�e�" << endl
		<< "       krytycznych (maksymalna warto��: Obra�enia x2,5)" << endl
		<< "       modyfikator_obra�enia(SI�A) = 1/4 maksymalna SI�A" << endl
		<< "       modyfikator_krytyk�w(SI�A) = 1,5 + 1/100 maksymalna SI�A" << endl
		<< "MAGIA - wp�ywa na maksymalny poziom MANY postaci, a tak�e na obra�enia od zakl��." << endl
		<< "        modyfikator_obra�e�(MAGIA) = 1/3 maksymalna MAGIA" << endl
		<< "        modyfikator(MAGIA) = 1/4 dodatkowe punkty MAGIA"
		<< "ZR�CZNO�� - okre�la jak zr�czna jest Twoja posta�. Zr�czno�� wp�ywa na obra�enia" << endl
		<< "            zadawane broni�, do kt�rej u�ywania niezb�dny jest ten atrybut, a tak�e" << endl
		<< "            na szans� trafienia krytycznego (Obra�enia x1,5, maksymalna warto��: 75%)." << endl
		<< "            modyfikator_obra�enia(ZR�CZNO��) = 1/4 maksymalna ZR�CZNO��" << endl
		<< "            modyfikator_krytyk�w(ZR�CZNO��) = (1/2 maksymalna ZR�CZNO��)%" << endl
		<< "KONDYCJA - okre�la bonus do maksymalnego zdrowia i odporno�� postaci na negatywne" << endl
		<< "           efekty(maksymalna warto��: 85%)"
		<< "           modyfikator(KONDYCJA) = 1/3 dodatkowa KONDYCJA" << endl
		<< "           modyfikator_odporno��(KONDYCJA) = 10% + (1/2 maksymalna KONDYCJA)%" << endl << endl;
	cout << "Kliknij 0 aby kontynuow�" << endl;
	cin >> choice;
	if (choice == 0) pomoc = false;
}
void Game::setSex(string race) {
	string char_race = race;
	system("cls");
	cout << rasa << endl << "Wybierz p�e� postaci." << endl << endl
		<< "1: Kobieta" << endl
		<< "2: M�czyzna" << endl;
	cout << "9: Wr�� do menu" << endl;
	cout << "0: Wyjd� z gry" << endl;
	cout << endl << "Wyb�r: ";
	cin >> choice;
	system("cls");
	switch (choice) {
	case 1:
		cout << "Czy na pewno kobieta jest Twoim wyborem?" << endl << endl;
		cout << "1: Tak" << endl;
		cout << "2: Nie" << endl;
		cout << endl << "Wyb�r: ";
		do {
			cin >> choice;
			if (choice == 1) {
				//dodaj p�e�
				system("cls");
				sex = "Kobieta";
				Game::setName(char_race, sex);
			}
			else if (choice == 2) {
				system("cls");
				Game::setSex(char_race);
			}
			else cout << "Z�a warto��";
		} while (choice != 1 || choice != 2);
		break;
	case 2:
		cout << "Czy na pewno m�czyzna jest Twoim wyborem?" << endl << endl;
		cout << "1: Tak" << endl;
		cout << "2: Nie" << endl;
		cout << endl << "Wyb�r: ";
		do {
			cin >> choice;
			if (choice == 1) {
				//dodaj p�e�
				system("cls");
				sex = "M�czyzna";
				Game::setName(char_race, sex);
			}
			else if (choice == 2) {
				system("cls");
				Game::setSex(rasa);
			}
			else cout << "Z�a warto��";
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
	cout << "Wprowad� imi� swojej postaci:" << endl << endl;
	cin >> name;
	system("cls");
	cout << "Czy na pewno imi� Twojej postaci to: " << name << "?" << endl;
	cout << endl << "1: Tak" << endl;
	cout << "2: Nie" << endl;
	cout << endl << "Wyb�r: ";
	do {
		cin >> choice;
		if (choice == 1) {
			//dodaj imi�
			system("cls");
			//Character::createCharacter(char_race, sex, name);
		}
		else if (choice == 2) {
			system("cls");
			Game::setName(char_race, char_sex);
		}
		else cout << "Z�a warto��";
	} while (choice != 1 || choice != 2);
}