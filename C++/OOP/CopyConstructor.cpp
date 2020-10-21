#include <iostream>
#include <iomanip>

#include <string>

using std::cout;
using std::endl;

static int count = 0;

class Player {
	private:
		std::string name;
		int health;
		int xp;

	public:
		std::string getName() 	{ return this->name; }
		int getHealth() 		{ return this->health; }
		int getXP() 			{ return this->xp; }

		// Constructor default parameters
		Player(std::string name = "N/A", int health = 0, int xp = 0);

		// Prototype for copy constructor:
		Player(const Player &);

		// Destructor:
		~Player() {
			count++;
			cout << count << " Destructor called for " << this->name << endl; 
		}
};

void displayPlayer(Player);

// Default constructor
Player::Player(std::string name, int health, int xp) 
	   : name{name}, health{health}, xp{xp} {
	count++;
	cout << count << " Default constructor called for " << this->name << endl;
}	

Player::Player(const Player &source) : Player(source.name, source.health, source.xp) {
	count++;
	cout << count << " Copy constructor called (made a copy of " 
		 << source.name << ")." << endl;
}

int main() {
	Player p1 {"John Doe", 100, 50};
	Player p2 {p1};

	displayPlayer(p1);
	cout << endl;
	displayPlayer(p2);

	return 0;
}

void displayPlayer(Player p) {
	cout << "Name : " << p.getName() << endl;
	cout << "Health : " << p.getHealth() << endl;
	cout << "XP : " << p.getXP() << endl;
	cout << endl;
}