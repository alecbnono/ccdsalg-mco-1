#include "qsort.h"
#include "compare.h"

int partition(Point arr[], int low, int high) 
{
    Point pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (compare(arr[j], pivot) < 0) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(Point arr[], int low, int high) 
{   
    int pi;

    if (low < high) 
    {
     pi = partition(arr, low, high);   
    }

    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
}
