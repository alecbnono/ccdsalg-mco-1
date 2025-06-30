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

int isCounterClockwise(Point *a, Point *b, Point *c) {

        double area = (b->x - a->x) * (c->y - a->y) - (b->y - a->y) * (c->x - a->x);

        if (area > 0) {
                return 1;
        }
        else if (area < 0) {
                return 1;
        }
        else {
                return 0;
        }
}
