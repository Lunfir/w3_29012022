#include <stdio.h>

void print(int arr[], int size)
{
    int limit = size - 1;

    for (int i = 0; i < limit; i++)
    {
        printf("%d_", arr[i]);
    }

    printf("%d\n", arr[limit]);
}

int partition(int array[], int lo, int hi)
{
    int mid = (hi + lo) / 2;

    int pivot = array[mid];
    array[mid] = array[hi];
    array[hi] = pivot;

    int pivotIndex = lo;
    
    for( ; array[pivotIndex] < array[hi]; pivotIndex++);
    for ( int iterationIndex = pivotIndex + 1; iterationIndex < hi; iterationIndex++)
    {
        if (array[iterationIndex] < array[hi])
        {
            pivot = array[iterationIndex];
            array[iterationIndex] = array[pivotIndex];
            array[pivotIndex] = pivot;

            pivotIndex += 1;
        }
    }

    pivot = array[pivotIndex];
    array[pivotIndex] = array[hi];
    array[hi] = pivot;

    return pivotIndex;
}

void quickSort(int array[], int lo, int hi)
{
    int pivotIndex;

    if (lo >= hi)
    {
        return;
    }


    pivotIndex = partition(array, lo, hi);

    quickSort(array, lo, pivotIndex - 1);
    quickSort(array, pivotIndex + 1, hi);
}


int main()
{
    // int arr[] = { 12, 34, 2, 78, 1, -12, 65 };

    int arr[] = { 1, 4, 2, 5, 0, 2, 4, 7 }; // 0 1 2 2 4 4 5 7

    print(arr, 8);

    quickSort(arr, 0, 6);
    // partition(arr, 0, 7);

    print(arr, 8);

    return 0;
}