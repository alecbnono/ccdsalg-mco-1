#include <stdlib.h>
#include "compare.h"

int partition(Point A[], int low, int high)
{
        Point pivot = A[high]; // store pivot value at the end
        int i = low - 1;

        // segregates values lower than the pivot
        // on the left and values higher on the right
        for (int j = low; j < high ; j++) {
                if (compare(A[j], pivot) != -1) {
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

void quicksort(Point A[], int low, int high)
{
        // sets base case as low >= high
        if (low < high) {
                // random pivot (better chances of an overall median)
                int randomPivotIndex  = (rand() % (high - low + 1)) + low;
                swap(&A[randomPivotIndex], &A[high]); // move pivot to end

                // partition index
                int pi = partition(A, low, high);

                // left of pivot
                quicksort(A, low, pi - 1);

                // right of pivot
                quicksort(A, pi + 1, high);
        }
}
