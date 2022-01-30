#include <iostream>

#include "vector.h"

int main()
{
    Vector vecA(12.23, 23.34);      // 1
    Vector vecB;                    // 2
    Vector vecC = Vector(2.3, 4.5); // 3

    std::cout << vecA << std::endl;
    std::cout << vecB << std::endl;
    std::cout << vecC << std::endl;

    // vecA += vecB;
    // // vecA.operator+=(vecB);

    // std::cout << "after: " << vecA << std::endl;

    // // Vector vecC = vectorSum(&vecA, &vecB);

    // std::cout << "is equal: " << (vecA == vecB) << std::endl; // vecA@vecB

    return 0;
}