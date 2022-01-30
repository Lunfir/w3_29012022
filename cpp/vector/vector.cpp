#include "vector.h"


void Vector::vectorIncrement(Vector other) {
    this->x += other.x;
    this->y += other.y;
}

void Vector::vectorDecrement(Vector other) {
    this->x -= other.x;
    this->y -= other.y;
}

bool Vector::vectorEqual(Vector other) {
    return this->x == other.x && this->y == other.y;
}

double Vector::vectorLen() {
    return hypot(this->x, this->y);
}

void Vector::vectorPrint() {
    std::cout << "(" << this->x << ", " << this->y << ")" << std::endl;
}

void Vector::setX(double x)
{
    this->x = x;
}

double Vector::getX()
{
    return this->x;
}

void Vector::setY(double y)
{
    this->y = y;
}

double Vector::getY()
{
    return this->y;
}