#include <iostream>

#include "vector.h"

int main()
{
    Vector vecA, vecB;

    vecA.setX(12.23);
    vecA.setY(23.34);

    vecB.setX(12.21212);
    vecB.setY(23.31232);

    std::cout << "before: " << vecA << std::endl;
    std::cout << vecB << std::endl;

    vecA += vecB;
    // vecA.operator+=(vecB);

    std::cout << "after: " << vecA << std::endl;

    // Vector vecC = vectorSum(&vecA, &vecB);

    std::cout << "is equal: " << (vecA == vecB) << std::endl; // vecA@vecB

    return 0;
}