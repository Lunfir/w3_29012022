#include <stdio.h>

void foo()
{
    printf("foo");
}

int main()
{
    int a = 12;
    int c, d;
    double b = 43.12;
    void(*ptrFunc)() = &foo;

    printf("a:          %llu\n", &a);
    printf("c:          %llu\n", &c);
    printf("d:          %llu\n", &d);
    printf("b:          %llu\n", &b);
    printf("&ptrFunc:   %llu\n", &ptrFunc);
    printf("ptrFunc:    %llu\n", ptrFunc);

    return 0;
}