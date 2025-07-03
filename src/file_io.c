#include <stdio.h>
#include <string.h>
#include "../include/stack.h"
#include "../include/file_io.h"

typedef char String30[31];

void exportData(Stack *s, String30 fileName) {
        FILE* fp = fopen(fileName, "w");
        int i;

        fprintf(fp, "%d\n", s->top+1);

        for (i = 0; i <= s->top; i++)
                fprintf(fp, "%.6f %.6f\n", s->data[i].x, s->data[i].y);
}

void importData(Stack *s, String30 fileName)
{
        FILE *fp;
        char fileName[31];
        Point tempPoint;
        int top;
        int i = 0;

        if ((fp = fopen(fileName, "rt")) != NULL)
        {
                fscanf(fp, "%d", &top);

                while (i < top && i < MAX_ELEMENTS)
                {
                       fscanf(fp, "%lf %lf", &tempPoint.x, &tempPoint.y);

                       s->data[i] = tempPoint;
                       i++;
                }

                top -= 1; // matches with top index

                printf("\nSuccessfully imported %s\n", fileName);
                fclose(fp);
        }
        else
                printf("Error reading to file.\n");
}

