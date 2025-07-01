#include "utils.h"

void swap(Point *a, Point *b)
{
        Point temp;

        temp = *a;
        *a = *b;
        *b = temp;
}

Point getMinY(Stack *s)
{
        Point minY = s->data[0];

        for (int i = 0; i <= s->top; i++)
        {
                if (minY.y > s->data[i].y) {
                        minY = s->data[i];
                }
        }

        return minY;
}

int isCounterClockwise(Point a, Point b, Point c)
{

        double area = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);

        if (area > 0) {
                return 1;
        }
        else if (area < 0) {
                return -1;
        }
        else {
                return 0;
        }
}

double distanceSquared(Point a, Point b)
{
        double dx = a.x - b.x;
        double dy = a.y - b.y;

        return dx * dx + dy * dy;
}

int directionFromPivot(Point a, Point b)
{
        // checks if to the right of pivot
        if (b.x > a.x)
                return 1; // right
        else
                return 0; // left
}


int compare(Point a, Point b, Point c)
{
        int orientation = isCounterClockwise(a, b, c);

        // swap if clockwise
        if (orientation == -1)
                return 1;
        // if collinear check for tie-breakers
        else if (orientation == 0)
        {
                double d1 = distanceSquared(a, b);
                double d2 = distanceSquared(a, c);


                // if to the right of pivot (positive slope)
                // swap if b > c based on distance
                if (directionFromPivot(a, b))
                {
                        if (d1 > d2)
                                return 1;
                        else
                                return 0;
                }
                // if to the left of pivot (negative or 0 slope)
                // swap if b < c based on distance
                else
                {
                        if (d1 < d2)
                                return 1;
                        else
                                return 0;
                }
        }
        // if counter clockwise no swap
        else
                return 0;
}
