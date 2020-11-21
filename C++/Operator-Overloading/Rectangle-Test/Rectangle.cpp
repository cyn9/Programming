#include "Rectangle.h"

double Rectangle::getHeight() const { return this->height; }
double Rectangle::getWidth()  const { return this->width; }

void Rectangle::setWidth(double width)   { this->width = width; }
void Rectangle::setHeight(double height) { this->height = height; }

void Rectangle::printRectangle() const {
    std::cout << "W = " << getWidth() << ", " << "L = " << getHeight() << "." << std::endl;
}

Rectangle Rectangle::operator+(const Rectangle &rect) const {
    return Rectangle { this->getWidth() + rect.getWidth(), this->getHeight() + rect.getHeight() };
}

Rectangle Rectangle::operator-(const Rectangle &rect) const {
    return Rectangle { this->getWidth() - rect.getWidth(), this->getHeight() - rect.getHeight() };
}
