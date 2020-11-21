#include <iostream>

#include "Player.h"

using std::cout;
using std::endl;

void displayNumOfActivePlayers(void);

int main() {
    displayNumOfActivePlayers();

    Player p1("Jack", 50, 30);
    displayNumOfActivePlayers();

    Player p2("Walter", 40, 25);
    displayNumOfActivePlayers();

    return 0;
}

void displayNumOfActivePlayers() {
    cout << "# of active players = " << Player::getNumberOfPlayers() << endl;
}
