#include <stdio.h>
#include <stdlib.h>

void triggerMemoryLeak(int* number)
{
    int* initParam = (int*)malloc(sizeof(int));
    if (initParam == NULL)
    {
        printf("initParam is NULL\n");
        return;
    }

    *initParam = 12345;
    *number = *initParam;

    // free(initParam);
}

int main()
{
    // stack
    int stack = 42;
    int* ptrStack = &stack;

    // heap
    int* ptrHeap = (int*)malloc(sizeof(int));
    if (ptrHeap == NULL) // NULL = 0
    {
        printf("ptr is NULL\n");

        return 0;
    }

    *ptrHeap = 42;

    printf("ptrStack:   %llu\n", ptrStack);
    printf("*ptrStack:  %d\n", *ptrStack);

    printf("ptrHeap:    %llu\n", ptrHeap);
    printf("*ptrHeap:   %d\n", *ptrHeap);

    free(ptrHeap);

    // memory leak
    int testNum;

    triggerMemoryLeak(&testNum);
    printf("testNum:   %d\n", testNum);

    return 0;
}