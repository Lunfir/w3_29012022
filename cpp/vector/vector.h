#include <iostream>
#include <cmath>

// access modifiers -----> incapsulation : public, private, protected

class Vector
{
public:
    void vectorIncrement(Vector other);

    void vectorDecrement(Vector other);

    bool vectorEqual(Vector other);

    double vectorLen();

    void vectorPrint();

    void setX(double x);
    double getX();

    void setY(double y);
    double getY();

private:
    double x;
    double y;
};
