#include <iostream>
#include <cmath>


struct Vector
{
    double x;
    double y;

    void vectorIncrement(Vector other) {
        this->x += other.x;
        this->y += other.y;
    }

    void vectorDecrement(Vector other) {
        this->x -= other.x;
        this->y -= other.y;
    }

    bool vectorEqual(Vector other) {
        return this->x == other.x && this->y == other.y;
    }

    double vectorLen() {
        return hypot(this->x, this->y);
    }

    void vectorPrint() {
        std::cout << "(" << this->x << ", " << this->y << ")" << std::endl;
    } 
};

// by pointer
Vector vectorSum(const Vector* const a, const Vector* b) {
    Vector sum = *a;
    // (*a).x = 32; error ----> const Vector* a
    // a += 1;      error ----> Vector* const a
    
    sum.vectorIncrement(*b);
    return sum;
}

// by reference
Vector vectorDiff(const Vector& a, Vector& b) {
    Vector diff = a;

    // a.x = 123; error
    
    diff.vectorDecrement(b);
    return diff;
}


int main()
{
    Vector vecA, vecB;

    vecA.x = 12.23;
    vecA.y = 23.34;

    vecB.x = 12.21212;
    vecB.y = 23.31232;

    vecA.vectorPrint();
    vecB.vectorPrint();

    Vector vecC = vectorSum(&vecA, &vecB);

    vecC.vectorPrint();

    std::cout << "is equal: " << vecA.vectorEqual(vecB) << std::endl;

    return 0;
}

