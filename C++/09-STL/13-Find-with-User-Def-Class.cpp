#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

class Player;
void printVec(const std::vector<Player *> &);

class Player {
    private:
        std::string name;
        int hp;
        int xp;

    public:
        Player()                                 : Player("N/A", 0, 0)        {}
        Player(std::string name, int hp, int xp) : name{name}, hp{hp}, xp{xp} {}
        ~Player() {}

        // Usage of std::find() with user defined
        // classes >> overload operator==() in order
        // to search the objects in a container 
        // using iterators.
        friend bool operator==(const Player& lhs, const Player& rhs) {
            if ( lhs.getHP() == rhs.getHP() &&
                 lhs.getXP() == rhs.getXP() &&
                 lhs.getName() == rhs.getName() )
                return true;

            return false;
        }

        std::string getName() const { return this->name; }
        int getHP() const           { return this->hp; }
        int getXP() const           { return this->xp; }
};

int main() {

    auto p1 = new Player {"John", 100, 50};
    auto p2 = new Player {"Jane", 100, 60};
    auto p3 = new Player {"Judy", 100, 75};
    auto p4 = new Player {"Jack", 100, 50};

    auto team = std::make_unique<std::vector<Player *>>();
    
    team->push_back(p1);
    team->push_back(p2);
    team->push_back(p3);
    printVec(*team);

    auto loc = std::find(team->begin(), team->end(), p4);

    if (loc != team->end())
        std::cout << "Player found! \n";
    else
        std::cout << "Player not found! \n";
    
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}

void printVec(const std::vector<Player *> &V) {
    for (const auto &e : V) {
        std::cout << e->getName() << " >> HP : "
                  << e->getHP() << ", XP : "
                  << e->getXP() << ".\n";
    }
}
