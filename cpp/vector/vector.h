#include <iostream>
#include <cmath>

// access modifiers -----> incapsulation : public, private, protected

class Vector
{
public:
    void vectorIncrement(Vector other);

    void vectorDecrement(Vector other);

    bool vectorEqual(Vector other) const;

    double vectorLen() const;

    void vectorPrint() const;

    void setX(double x);
    double getX() const;

    void setY(double y);
    double getY() const;

private:
    double x;
    double y;
};
