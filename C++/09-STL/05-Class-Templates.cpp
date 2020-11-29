#include <iostream>
#include <string>
#include <memory>
#include <vector>

template<typename T>
class Item {
    private:
        std::string name;
        T price;
    
    public:
        Item()                          : Item("N/A", 0.0)           {}
        Item(std::string name, T price) : name {name}, price {price} {}

        ~Item() {}

        std::string getItemName() const { return this->name; }
        T getPrice() const { return this->price; }

        void printItemInfo() const {
            std::cout << "Item Name : " << this->getItemName() << ", Price : $"
                                        << this->getPrice() << "." << std::endl;
        }
};

int main() {
    auto item1 = std::make_shared<Item<double>>("Milk", 1.95);
    auto item2 = std::make_shared<Item<double>>("Pizza", 9.99);

    item1->printItemInfo();
    item2->printItemInfo();

    return 0;
}
