#include <iostream>
#include <cmath>

// access modifiers -----> incapsulation : public, private, protected

class Vector
{
    friend std::ostream& operator<<(std::ostream& os, const Vector& obj);

public:
    // friend std::ostream& operator<<(std::ostream& os, const Vector& obj);

    void operator+=(const Vector& other);

    void vectorDecrement(Vector other);

    bool operator==(const Vector& other) const;

    double vectorLen() const;

    void setX(double x);
    double getX() const;

    void setY(double y);
    double getY() const;

private:
    double x;
    double y;
};

std::ostream& operator<<(std::ostream& os, const Vector& obj);
