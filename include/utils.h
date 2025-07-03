#ifndef UTILS_H
#define UTILS_H
#include "stack.h"

void swap(Point *a, Point *b);
int getMinYIndex(Stack *s);
int isCounterClockwise(Point a, Point b, Point c);
double distanceSquared(Point a, Point b);
int directionFromPivot(Point a, Point b);
int compare(Point a, Point b, Point c);

#endif
