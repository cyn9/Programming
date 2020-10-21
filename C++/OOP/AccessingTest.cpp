#include <iostream>
#include <string>

using namespace std;

class Player {
	public:
		string name;
		int health;
		int xp;

		inline void talk(string text);
		bool isDead();
};

inline void Player::talk(string text) {
	cout << "Hey " << text << "." << endl;
}

int main() {
	Player p1;
	p1.name = "John Doe";
	p1.health = 100;
	p1.xp = 12;
	p1.talk(p1.name);

	Player *p2 = new Player();
	p2->name = "Jane Doe";
	p2->health = 100;
	p2->xp = 15;
	p2->talk(p2->name);

	delete p2;

	return 0;
}