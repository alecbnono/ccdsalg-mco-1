#include <stdlib.h>

#include "../include/stack.h"
#include "../include/sort.h"
#include "../include/utils.h"

void selectionSort(Point arr[], int n, Point pivot) 
{
    int i, j;

    // Iterate through the array to find the minimum element
    for (i = 0; i < n - 1; i++) 
    {
        int min_idx = i; // Assume the current element is the minimum

        // Find the minimum element (based on polar angle) in the remaining unsorted array
        for (j = i + 1; j < n; j++) {
            if (compare(pivot, arr[j], arr[min_idx])) 
            {
                min_idx = j; // Update index of the minimum element found so far
            }
        }

        // If the minimum element found is not at the current position 'i', swap them
        if (min_idx != i) 
        {
            swap(&arr[i], &arr[min_idx]);
        }
    }
}

int partition(Point A[], int low, int high, Point minY)
{
        Point pivot = A[high]; // store pivot value at the end
        int i = low - 1;

        // segregates values lower than the pivot
        // on the left and values higher on the right
        for (int j = low; j < high ; j++) {
                if (compare(minY, A[j], pivot)) {
                        i++;
                        swap(&A[i], &A[j]);
                }
        }

        // swap pivot stored on the end
        // to its sorted position
        swap(&A[i + 1], &A[high]);

        // returns index of sorted pivot
        return i + 1;
}

void quicksort(Point A[], int low, int high, Point minY)
{
        // sets base case as low >= high
        if (low < high) {
                // random pivot (better chances of an overall median)
                int randomPivotIndex  = (rand() % (high - low + 1)) + low;
                swap(&A[randomPivotIndex], &A[high]); // move pivot to end

                // partition index
                int pi = partition(A, low, high, minY);

                // left of pivot
                quicksort(A, low, pi - 1, minY);

                // right of pivot
                quicksort(A, pi + 1, high, minY);
        }
}
