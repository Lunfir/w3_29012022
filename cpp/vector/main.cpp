#include <iostream>

#include "vector.h"

int main()
{
    Vector vecA, vecB;

    vecA.setX(12.23);
    vecA.setY(23.34);

    vecB.setX(12.21212);
    vecB.setY(23.31232);

    vecA.vectorPrint();
    vecB.vectorPrint();

    // Vector vecC = vectorSum(&vecA, &vecB);

    // vecC.vectorPrint();

    std::cout << "is equal: " << vecA.vectorEqual(vecB) << std::endl;

    return 0;
}