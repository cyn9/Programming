#include "Vector2D.h"

double Vector2D::getX() const { return this->x; }
double Vector2D::getY() const { return this->y; }

void Vector2D::setX(double width)  { this->x = x; }
void Vector2D::setY(double height) { this->y = y; }

void Vector2D::printVector() const {
    std::cout << "<" << getX() << ", " << getY() << ">" << std::endl;
}

Vector2D Vector2D::operator+(const Vector2D &vec) const {
    return Vector2D { this->getX() + vec.getX(), this->getY() + vec.getY() };
}

Vector2D Vector2D::operator-(const Vector2D &vec) const {
    return Vector2D { this->getX() - vec.getX(), this->getY() - vec.getY() };
}

double Vector2D::operator*(const Vector2D &vec) const {
    return ( this->getX()*vec.getX() + this->getY()*vec.getY() );
}
