#include <stdio.h>

void foo()
{
    printf("foo\n");
}

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    ////////////////
    int num = 42;
    int* ptrNum;
    ptrNum = &num;

    ////////////////
    void(*ptrFunc)();
    ptrFunc = &foo;

    (*ptrFunc)();
    ptrFunc();

    ////////////////
    int(*ptrSum)(int, int) = &sum;

    printf("sum: %d\n", ptrSum(2, 3));

    return 0;
}
