#include <iostream>
#include <iomanip>
#include <string>
#include <memory>

typedef struct {
    std::string fullName = "";
    int IDnum = 0;
    int year = 0;
} Student_t;

void printStudentInfo(std::unique_ptr<Student_t>);

int main() {

    std::unique_ptr<Student_t> s1 = std::make_unique<Student_t>();
    s1->fullName = "John Doe";
    s1->IDnum = 605848;
    s1->year = 4;

    printStudentInfo(std::move(s1));

    std::cout << std::boolalpha << (s1 == nullptr) << std::endl;

    return 0;
}

void printStudentInfo(std::unique_ptr<Student_t> s) {
    std::cout << s->fullName << '\n';
    std::cout << s->IDnum << '\n';
    std::cout << s->year << std::endl;
}
