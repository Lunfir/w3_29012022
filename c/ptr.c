#include <stdio.h>

typedef struct
{
    double x, y, z;
} Vector;

void foo()
{
    printf("foo");
}

int main()
{
    int num = 42;
    int* ptr;

    ptr = &num;

    printf("num:    %d\n", num);
    printf("&num:   %llu\n", &num);
    printf("ptr:    %llu\n", ptr);
    printf("&ptr:   %llu\n", &ptr);

    ptr = (int*)218347512; // int* <---> int
    printf("ptr:    %llu\n", ptr);
    printf("&ptr:   %llu\n", &ptr);


    printf("&dbl:   %llu\n", sizeof(int*));
    printf("&int:   %llu\n", sizeof(double*));
    printf("&fun:   %llu\n", sizeof(void(*)()));
    printf("&vec:   %llu\n", sizeof(Vector*));

    void(*fArr[])() = { &foo, &foo, &foo };
    int* arr[] = { &num, &num, &num };

    printf("fArr:   %llu\n", sizeof(fArr));
    printf("arr:    %llu\n", sizeof(arr));

    return 0;
}