#include "vector.h"


void Vector::operator+=(const Vector& other)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    this->x += other.x;
    this->y += other.y;
}

void Vector::vectorDecrement(Vector other) {
    this->x -= other.x;
    this->y -= other.y;
}

bool Vector::operator==(const Vector& other) const
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    return this->x == other.x && this->y == other.y;
}

double Vector::vectorLen() const {
    return hypot(this->x, this->y);
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

std::ostream& operator<<(std::ostream& os, const Vector& obj)
{
    os << "(" << obj.x << ", " << obj.y << ")";

    return os;
}