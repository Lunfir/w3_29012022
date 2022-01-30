#include "car.h" // car.hpp


Car::Car(double capacity
        , double consumption
        , const Point& location
        , const std::string& model)
{
    this->fuelCapacity = capacity;
    this->fuelConsumption = consumption;
    this->location = location;
    this->model = model; // this->model = "Mercedes"
    this->fuelAmount = 0;
}

Car::~Car()
{

}

double Car::getFuelAmount() const
{
    return this->fuelAmount;
}

double Car::getFuelCapacity() const
{
    return this->fuelCapacity;
}

double Car::getFuelConsumption() const
{
    return this->fuelConsumption;
}

const Point& Car::getLocation() const
{
    return this->location;
}

const std::string& Car::getModel() const
{
    return this->model;
}

void Car::drive(const Point& destination)
{
    double dist = this->location.distance(destination);
    // double distance = destination.distance(this->location);
    double fuel = this->fuelConsumption * dist;

    if (this->fuelAmount < fuel)
    {
        throw OutOfFuel();

        return;
    }

    this->location = destination;
    this->fuelAmount -= fuel;
}

void Car::drive(double x, double y)
{
    this->drive(Point(x, y));
}

void Car::refill(double fuel)
{
    // what if fuelAmount is more than 0?????
    if (fuel > this->fuelCapacity)
    {
        throw ToMuchFuel();

        return;
    }

    this->fuelAmount = fuel;
}

std::ostream& operator<<(std::ostream& out, const Car& car)
{
    out << "model       : " << car.getModel() << "\n"
        << "capacity    : " << car.getFuelCapacity() << "\n"
        << "consumption : " << car.getFuelConsumption() << "\n"
        << "location    : " << car.getLocation() << "\n"
        << "fuel        : " << car.getFuelAmount() << "\n"
        << "======================================";

    return out;
}

