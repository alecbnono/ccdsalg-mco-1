#include <stdio.h>
#include <time.h>    // this is needed for calling the clock()
#include "../include/utils.h"
#include "../include/sort.h"
#include "../include/graham_scan1.h"

void slowGrahamScan(Stack *input, Stack *result)
{

        clock_t start;
        clock_t end;

        start = clock();

    int numPoints = input->top + 1;
    int pivotIndex = getMinYIndex(input);
    swap(&input->data[0], &input->data[pivotIndex]);
    Point pivot = input->data[0];

    selectionSort(input->data+1, numPoints-1, pivot);

    // pushing initial points into result stack
    result->top = -1;
    result->data[++result->top] = input->data[0];  // pivot

    int i = 1;
    while (i < numPoints && isCounterClockwise(pivot, input->data[i], input->data[i+1]) == 0) {
        i++;  // skip collinear points
    }

    result->data[++result->top] = input->data[i++];
    result->data[++result->top] = input->data[i++];

    // comparison of remaining points
    for (int i = 3; i <= input->top; i++) 
    {
        
        while (result->top >= 1 &&
               isCounterClockwise(result->data[result->top - 1],
                                  result->data[result->top],
                                  input->data[i]) <= 0) {
            result->top--;
        }
        result->data[++result->top] = input->data[i];
    }

        end = clock();

    printf("Input Size: %-6d\nTime Elapsed: %-15lf\n", input->top + 1, (double)(end - start));
}
