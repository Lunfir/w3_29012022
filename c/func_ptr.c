#include <stdio.h>

void fooA()
{
    printf("fooA\n");
}

void fooB()
{
    printf("fooB\n");
}

void fooC()
{
    printf("fooC\n");
}


int main()
{
    void(*functions[])() = { &fooA, &fooB, &fooC };

    // functions[0] = &fooA;
    // functions[1] = &fooB;
    // functions[2] = &fooC;

    for (int i = 0; i < 3; i++)
    {
        functions[i]();
    }

    return 0;
}
