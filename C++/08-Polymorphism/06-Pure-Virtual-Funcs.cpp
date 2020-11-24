#include <iostream>
#include <vector>

class Shape {

public:
    // Abstract base "Shape" class
    virtual void draw()     = 0;    // Pure virtual function
    virtual void rotate()   = 0;    // Pure virtual function

    virtual ~Shape() {}; 

};

class Circle : public Shape {

public:
    Circle() = default;
    virtual ~Circle() {};

    virtual void draw() override;
    virtual void rotate() override;

};

void Circle::draw()   { std::cout << "Circle Draw function called." << std::endl; }
void Circle::rotate() { std::cout << "Circle Rotate function called." << std::endl; }

class Rectangle : public Shape {

public:
    Rectangle() = default;
    virtual ~Rectangle() {};

    virtual void draw() override;
    virtual void rotate() override;

};

void Rectangle::draw()   { std::cout << "Rectangle Draw function called." << std::endl; }
void Rectangle::rotate() { std::cout << "Rectangle Rotate function called." << std::endl; }

class Triangle : public Shape {

public:
    Triangle() = default;
    virtual ~Triangle() {};

    virtual void draw() override;
    virtual void rotate() override;

};

void Triangle::draw()   { std::cout << "Triangle Draw function called." << std::endl; }
void Triangle::rotate() { std::cout << "Triangle Rotate function called." << std::endl; }

int main() {

    static unsigned count {1};

    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();
    Shape* s3 = new Triangle();
    Shape* s4 = new Circle();

    std::vector<Shape *> *V = new std::vector<Shape *>;
    V->reserve(4);
    
    V->push_back(s1);
    V->push_back(s2);
    V->push_back(s3);
    V->push_back(s4);

    for (auto &e: *V) {
        std::cout << "Element " << count << " : " << std::endl;

        e->draw();
        e->rotate();

        std::cout << "- - - - - - - - - - - - - - - - - - -" << std::endl;

        count++;
    }

    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete V;

    return 0;
}