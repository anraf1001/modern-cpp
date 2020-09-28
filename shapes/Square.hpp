#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle {
public:
    Square() = default;
    explicit Square(Color color)
        : Rectangle(color) {}
    Square(double x, Color color = Color::Blue);
    Square(const Square& other) = default;

    double getArea() const noexcept override;
    double getPerimeter() const noexcept override;
    void print() const override;

private:
    double getY() = delete;  // should not have Y dimension
};
