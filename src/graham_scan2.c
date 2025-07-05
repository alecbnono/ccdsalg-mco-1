#include <stdio.h>
#include <time.h>    // this is needed for calling the clock()
#include "../include/utils.h"
#include "../include/sort.h"
#include "../include/graham_scan2.h"

void fastGrahamScan(Stack *input, Stack *result)
{
    clock_t start, end;
    start = clock();

    int i = 1;
    int numPoints = input->top + 1;
    int pivotIndex = getMinYIndex(input);
    swap(&input->data[0], &input->data[pivotIndex]);
    Point pivot = input->data[0];

    quicksort(input->data, 0, input->top, pivot);

    // push pivot into stack
    stackPush(result, input->data[0]);

    while (i < numPoints - 1 && isCounterClockwise(pivot, input->data[i], input->data[i + 1]) == 0) {
        i++;  // skip collinear points
    }

    stackPush(result, input->data[i++]);

    if (i < numPoints) stackPush(result, input->data[i++]);

    for (i = 3; i < numPoints; i++) {
        while (result->top >= 1 &&
               isCounterClockwise(stackNextToTop(result),
                                  stackTop(result),
                                  input->data[i]) <= 0) {
            stackPop(result);
        }
        stackPush(result, input->data[i]);
    }

    end = clock();
    printf("Input Size: %-6d\nTime Elapsed: %-15lf\n", input->top + 1, (double)(end - start));
}
