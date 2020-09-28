#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle {
public:
    using Rectangle::Rectangle;
    Square(double x);
    Square(const Square& other);

    double getArea();
    double getPerimeter();
    void print();

private:
    double getY();  // should not have Y dimension
    Square();
};
