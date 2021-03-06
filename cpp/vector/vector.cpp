#include "vector.h"

Vector::Vector()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    this->x = 0.0;
    this->y = 0.0;
}

Vector::Vector(double x, double y)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    this->x = x;
    this->y = y;
}

Vector::Vector(const Vector& other)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    this->x = other.x;
    this->y = other.y;
}

Vector::~Vector()
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Vector& Vector::operator=(const Vector& other)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;

    this->x = other.x;
    this->y = other.y;

    return *this;
}

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