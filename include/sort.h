#ifndef SORT_H
#define SORT_H
#include "stack.h"
#include "utils.h"

int partition(Point A[], int low, int high, Point minY);
void quicksort(Point A[], int low, int high, Point minY);
void selectionSort(Point arr[], int n, Point minY);

#endif
