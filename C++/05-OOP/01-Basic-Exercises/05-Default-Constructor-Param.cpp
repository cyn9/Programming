#include <iostream>
#include <iomanip>

#include <string>

using std::cout;
using std::endl;

class Player {
	public:
		std::string name;
		int health;
		int xp;

		// Default constructor parameters
		Player(std::string name	= "N/A",
			   int health 		= 0, 
			   int xp 			= 0);
};

Player::Player(std::string n, int h, int x) : name{n}, health{h}, xp{x} {
	cout << "Three-arg constructor called." << endl;
}

void showAttributes(const Player * const);

int main() {
	Player *p1 = new Player();
	showAttributes(p1);

	Player *p2 = new Player("John Doe");
	showAttributes(p2);

	Player *p3 = new Player("John Doe", 100);
	showAttributes(p3);

	return 0;
}

void showAttributes(const Player * const pPtr) {
	cout << "Name : " << pPtr->name << endl;
	cout << "Health : " << pPtr->health << endl;
	cout << "XP : " << pPtr->xp << endl;
	cout << endl;
}