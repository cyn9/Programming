#include <iostream>
#include <iomanip>

#include <string>

using std::cout;
using std::endl;

class Player {
	private:
		std::string name;
		int health;
		int xp;

	public:
		std::string getName() const	{ return this->name; }
		int getHealth() 		    { return this->health; }
		int getXP() 			    { return this->xp; }

        // Constructors
        Player() {}
		Player(std::string name = "N/A", int health = 0, int xp = 0);   // Constructor default parameters

		// Prototype for copy constructor:
		Player(const Player &);
        
		~Player() {}
};

Player::Player(std::string name, int health, int xp) {
    this->name = name;
    this->health = health;
    this->xp = xp;
}

void displayPlayerName(const Player &);

void displayPlayerName(const Player &p) {
    cout << p.getName() << endl;
}

int main() {
    const Player p1 {"Villain", 100, 100};
    Player p2 {"Hero", 100, 50};

    displayPlayerName(p1);
    displayPlayerName(p2);

    return 0;
}