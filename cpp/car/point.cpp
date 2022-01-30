#include "point.h"

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

Point::~Point()
{

}

double Point::getX() const
{
    return this->x;
}

double Point::getY() const
{
    return this->y;
}

void Point::setX(double value)
{
    this->x = value;
}

void Point::setY(double value)
{
    this->y = value;
}

double Point::distance(const Point& other) const
{
    double xPow = std::pow((this->x - other.x), 2);
    double yPow = std::pow((this->y - other.y), 2);

    return std::sqrt(xPow + yPow);
}

bool Point::operator==(const Point& other) const
{
    return this->x == other.x && this->y == other.y;
}

bool Point::operator!=(const Point& other) const
{
    return !(*this == other); // this->operator==(other);
}

std::ostream& operator<<(std::ostream& out, const Point& point)
{
    out << "(" << point.getX() << ", " << point.getY() << ")";
    return out;
}