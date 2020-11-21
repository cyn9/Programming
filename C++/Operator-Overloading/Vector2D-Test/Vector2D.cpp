#include "Vector2D.h"

double Vector2D::getHeight() const { return this->height; }
double Vector2D::getWidth()  const { return this->width; }

void Vector2D::setWidth(double width)   { this->width = width; }
void Vector2D::setHeight(double height) { this->height = height; }

void Vector2D::printVector() const {
    std::cout << "<" << getWidth() << ", " << getHeight() << ">" << std::endl;
}

Vector2D Vector2D::operator+(const Vector2D &rect) const {
    return Vector2D { this->getWidth() + rect.getWidth(), this->getHeight() + rect.getHeight() };
}

Vector2D Vector2D::operator-(const Vector2D &rect) const {
    return Vector2D { this->getWidth() - rect.getWidth(), this->getHeight() - rect.getHeight() };
}
