#include "stack.c"
#include <stdio.h>

void export(Stack* s) {
    FILE* file = fopen("output.txt", "w");
    int i;
    
     fprintf(file, "%d\n", s->top);

     for (i = 0; i < s->top; i++)
        fprintf(file, "%.6f %.6f\n", s->data[i].x, s->data[i].y);
}