#include <iostream>

#include "vector.h"

int main()
{
    // initialization
    Vector vecA(12.23, 23.34);      // 1
    Vector vecB;                    // 2
    Vector vecC = Vector(2.3, 4.5); // 3

    // copy constructor
    Vector vecD = vecA;

    // assignment operator
    Vector vecE;
    vecE = vecA; // vecE.operator=(vecA);

    std::cout << vecA << std::endl;
    std::cout << vecB << std::endl;
    std::cout << vecC << std::endl;
    std::cout << vecD << std::endl;
    std::cout << vecE << std::endl;

    return 0;
}