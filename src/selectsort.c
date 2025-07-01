#include "selectsort.h"
#include "utils.h"

void selectionSort(Point arr[], int n, Point minY)
{
    int i, j;
    
    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        
        for(j = i + 1; j < n; j++)
        {
            if(compare(minY, arr[j], arr[min]))
            {
                min = j;
            }
        }
        
        if (min != i)
            swap(&arr[i], &arr[min]);
    }
}
