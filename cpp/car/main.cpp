// g++ -c point.cpp -o point.o && g++ -c car.cpp -o car.o && g++ point.o car.o main.cpp -o main.exe && ./main.exe

#include <iostream>
#include "car.h"
#include "point.h"

int main()
{
    Point start(12.2, 1);
    Point end(16.2, 2.5);
    double fuel = 100;
    Car car = Car(50, 0.6, start, "Mercedes");

    std::cout << car << std::endl;

    // refill
    try
    {
        car.refill(fuel);
    } 
    catch(ToMuchFuel& exc) 
    // catch(...)
    {
        std::cout << exc.what() << std::endl;
        car.refill(fuel * 0.5);
    }

    std::cout << car << std::endl;

    // drive
    try
    {
        car.drive(end);
    } 
    catch(OutOfFuel& exc) 
    // catch(...)
    {
        std::cout << exc.what() << std::endl;
    }

    std::cout << car << std::endl;

    return 0;
}
