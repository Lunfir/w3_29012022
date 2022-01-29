#include <stdio.h>

#define SIZE 4

typedef enum
{
    CTRL    = 1 << 0,
    ALT     = 1 << 1,
    SHIFT   = 1 << 2
} KeyMods;

typedef union
{
    int number;
    char arr[SIZE];
} UnionTest;

typedef struct
{
    int number;
    char arr[SIZE];
    double num;
} StructTest;


int main()
{
    printf("size of enum:   %llu\n", sizeof(KeyMods));
    printf("size of union:  %llu\n", sizeof(UnionTest));
    printf("size of struct: %llu\n", sizeof(StructTest));

    UnionTest uni;

    uni.number = 120;

    printf("uni.number: %d\n", uni.number);
    printf("uni.arr[0]: %c\n", uni.arr[0]);
    printf("uni.arr[1]: %c\n", uni.arr[1]);
    printf("uni.arr[2]: %c\n", uni.arr[2]);
    printf("uni.arr[3]: %c\n", uni.arr[3]);
    
    return 0;
}
