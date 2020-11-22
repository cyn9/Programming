#include <iostream>

class Vector2D {

private:
    double x;
    double y;

public:
    // Constructor/destructor:
    Vector2D() : x{0}, y{0} {}
    Vector2D(double x, double y) : x{x}, y{y} {}
    ~Vector2D() {}

    // Copy assignment:
    Vector2D &operator=(const Vector2D &);

    // Operator overloading:
    Vector2D operator+(const Vector2D &);
    Vector2D operator-(const Vector2D &);

    // Stream insertion/extraction overloading:
    friend std::ostream &operator<<(std::ostream &, const Vector2D &);   // Output stream
    friend std::istream &operator>>(std::istream &, Vector2D &);         // Input stream

    // Getter methods:
    double getX() const { return this->x; }
    double getY() const { return this->y; }

    // Setter methods:
    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }

    // Other methods:
    void printVector() const { std::cout << "<" << this->x << ", " << this->y << ">"; }

};

// Operator overloading:
Vector2D Vector2D::operator+(const Vector2D &obj) { return Vector2D(this->x + obj.getX(), this->y + obj.getY()); }
Vector2D Vector2D::operator-(const Vector2D &obj) { return Vector2D(this->x - obj.getX(), this->y - obj.getY()); }

// Copy assignment overloading:
Vector2D &Vector2D::operator=(const Vector2D &source) {
    if (this == &source)
        return *this;

    this->x = source.getX();
    this->y = source.getY();

    return *this;
}

// Output stream operator overloading:
std::ostream &operator<<(std::ostream &os, const Vector2D &obj) {
    os << "<" << obj.x << ", " << obj.y << ">";
    return os;
}

// Input stream operator overloading:
std::istream &operator>>(std::istream &is, Vector2D &obj) {
    is >> obj.x >> obj.y;
    return is;
}

int main() {
    Vector2D V {2, 3};
    std::cout << V << std::endl;

    Vector2D W;
    std::cout << "Enter x and y for Vector W : ";
    std::cin >> W;
    std::cout << W;

    return 0;
}
