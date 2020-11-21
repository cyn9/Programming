#pragma once

#include <iostream>

class Vector2D {
private:
    double x;
    double y;

public:
    Vector2D() : x{0}, y{0} {};
    Vector2D(double x, double y) : x{x}, y{y} {}

    Vector2D operator+(const Vector2D &) const;
    Vector2D operator-(const Vector2D &) const;
    double operator*(const Vector2D &) const;

    ~Vector2D() {}

    void setX(double);
    void setY(double);

    double getX() const;
    double getY() const;

    void printVector() const;
};
