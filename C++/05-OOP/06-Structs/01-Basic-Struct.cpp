#include <iostream>
#include <string>

struct User {
    // Struct members are public in default.
    std::string userName;
    int age;

    // Public struct 
    void setPassCode(std::string passCode) { this->passCode = passCode; } 
    std::string getPassCode() const        { return passCode; }

    private:
        std::string passCode = "1234";  // Default value.
};

int main() {

    User u1;
    u1.userName = "user1234";
    u1.age = 30;

    std::cout << "User Name : " << u1.userName << ", Age : " << u1.age << "." << '\n';

    u1.setPassCode("9876");
    std::cout << "Pass code is " << u1.getPassCode() << "." << '\n';

    return 0;
}
