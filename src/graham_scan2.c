#include "../include/utils.h"
#include "../include/sort.h"
#include "../include/graham_scan2.h"

void fastGrahamScan(Stack *input, Stack *result)
{
    Point pivot = input->data[getMinYIndex(input)];

    quicksort(input->data, 0, input->top, pivot);

    // pushing initial points into result stack
    result->top = -1;
    result->data[++result->top] = input->data[0];
    result->data[++result->top] = input->data[1];
    result->data[++result->top] = input->data[2];

    // comparison of remaining points
    for (int i = 3; i <= input->top; i++) {
        while (result->top >= 1 &&
               isCounterClockwise(result->data[result->top - 1],
                                  result->data[result->top],
                                  input->data[i]) <= 0) {
            result->top--;
        }
        result->data[++result->top] = input->data[i];
    }
}
