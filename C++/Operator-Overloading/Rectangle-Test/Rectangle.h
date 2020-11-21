#pragma once

#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle() : width{0}, height{0} {};
    Rectangle(double width, double height) : width{width}, height{height} {}

    Rectangle operator+(const Rectangle &) const;
    Rectangle operator-(const Rectangle &) const;

    ~Rectangle() {}

    void setWidth(double);
    void setHeight(double);

    double getWidth() const;
    double getHeight() const;

    void printRectangle() const;
};
