#include "Main.h"

class player {
public:
	string name;
	string uClass;
	float health = 0.0;
	int attack = 0;
	int defense = 0;
	int gold = 0;
};

void startGame(player user) {
	cout << "Welcome user, before you embark on this great journey, what is your name: ";
	cin >> user.name;

	std::system("cls");
	cout << "Ah, welcome " << user.name << " to the Adventures in C!" << endl;
	cout << "In this adventure, you must choose a class!" << endl;
	cout << "1 | Knight" << endl;
	cout << "2 | Soldier" << endl;

	cout << "\n";
	string inA;
	cin >> inA;

	if (inA == "1") {
		user.uClass = "Knight";
		user.health = 25;
		user.attack = 5;
		user.defense = 10;
	}
	if (inA == "2") {
		user.uClass = "Soldier";
		user.health = 25;
		user.attack = 10;
		user.defense = 5;
	}

	std::system("cls");
	cout << "Congratulations! You chose the " << user.uClass << " class!";
	cout << "\n";
	cin;
}

int main(int argc, char* argv[]) {
	player user;

	startGame(user);
}