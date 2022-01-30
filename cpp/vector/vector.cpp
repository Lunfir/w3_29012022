#include "vector.h"


void Vector::vectorIncrement(Vector other) {
    this->x += other.x;
    this->y += other.y;
}

void Vector::vectorDecrement(Vector other) {
    this->x -= other.x;
    this->y -= other.y;
}

bool Vector::vectorEqual(Vector other) const {
    return this->x == other.x && this->y == other.y;
}

double Vector::vectorLen() const {
    return hypot(this->x, this->y);
}

void Vector::vectorPrint() const {
    std::cout << "(" << this->x << ", " << this->y << ")" << std::endl;
}

void Vector::setX(double x)
{
    this->x = x;
}

double Vector::getX() const
{
    return this->x;
}

void Vector::setY(double y)
{
    this->y = y;
}

double Vector::getY() const
{
    return this->y;
}