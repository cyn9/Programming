#pragma once

#include <iostream>
#include <string>

using std::string;

class Player {

private:
    static int numberOfPlayers;

    string name;
    int xp;
    int health;

public:
    static int getNumberOfPlayers();

    Player() {};
    Player(string name, int xp, int health);
    ~Player();

};
