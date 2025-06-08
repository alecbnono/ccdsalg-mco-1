#include "compare.h"

int compare(Point a, Point b)
{
        return 0; // a & b are equal
        // return 1; if a < b
        // return -1; if b < a
}

void swap(Point *a, Point *b)
{
        Point temp;

        temp = *a;
        *a = *b;
        *b = temp;
}
