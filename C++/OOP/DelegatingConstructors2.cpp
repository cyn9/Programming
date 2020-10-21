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
	// Delegating constructor
	Player(std::string name, int health, int xp) : name{name}, health{health}, xp{xp} {}
	
	Player()									 : Player("N/A", 0, 0) 		{}
	Player(std::string name)					 : Player(name, 0, 0) 		{}
	Player(std::string name, int health)		 : Player(name, health, 0)	{}

	std::string getName()	const 	{ return this->name; }
	int getHealth() 	  	const 	{ return this->health; }
	int getXP() 			const 	{ return this->xp; }

	void setName(std::string name)	{ this->name = name; }
	void setHealth(int health) 		{ this->health = health; }
	void setXP(int xp)				{ this->xp = xp; }
};

void showAttributes(const Player * const);

int main() {
	Player *p1 = new Player();
	showAttributes(p1);

	p1->setName("John Doe");
	p1->setHealth(100);
	p1->setXP(0);

	cout << endl;
	showAttributes(p1);

	delete p1;

	return 0;
}

void showAttributes(const Player * const pPtr) {
	cout << "Name : " << pPtr->getName() << endl;
	cout << "Health : " << pPtr->getHealth() << endl;
	cout << "XP : " << pPtr->getXP() << endl;
}