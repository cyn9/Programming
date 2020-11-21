#pragma once

#include <iostream>

class Vector2D {
private:
    double width;
    double height;

public:
    Vector2D() : width{0}, height{0} {};
    Vector2D(double width, double height) : width{width}, height{height} {}

    Vector2D operator+(const Vector2D &) const;
    Vector2D operator-(const Vector2D &) const;

    ~Vector2D() {}

    void setWidth(double);
    void setHeight(double);

    double getWidth() const;
    double getHeight() const;

    void printVector() const;
};
