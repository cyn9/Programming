#include "Player.h"

// Initialize the static data.
int Player::numberOfPlayers {0};

Player::Player(string name, int xp, int health) {
    this->name = name;
    this->xp = xp;
    this->health = health;

    std::cout << "Constructor called for " << this->name << "." << std::endl;

    numberOfPlayers++;
}

Player::~Player() {
    numberOfPlayers--;

    std::cout << "Destructor called for " << this->name << "." << std::endl;
}

int Player::getNumberOfPlayers() {
    return numberOfPlayers;
}
