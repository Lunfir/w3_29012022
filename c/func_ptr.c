#include <stdio.h>

void fooA(int num)
{
    printf("fooA: %d\n", num + 1);
}

void fooB(int num)
{
    printf("fooB: %d\n", num + 2);
}

void fooC(int num)
{
    printf("fooC: %d\n", num + 3);
}


void handler(void(*ptrFunc)(int), int param)
{
    ptrFunc(param);
}


int main()
{
    void(*functions[])(int) = { &fooA, &fooB, &fooC };

    for (int i = 0; i < 3; i++)
    {
        handler(functions[i], i);
    }

    return 0;
}
