#include <stdio.h>
#include <string.h>
#include "../include/stack.h"
#include "../include/file_io.h"

void exportData(Stack *s, String100 fileName) 
{
        String100 folder = "./outputs/";

        FILE* fp = fopen(strcat(folder ,fileName), "w");
        int i;

        fprintf(fp, "%d\n", s->top+1);

        for (i = 0; i <= s->top; i++)
                fprintf(fp, "%.6f %.6f\n", s->data[i].x, s->data[i].y);
        
        printf("\nSuccessfully exported %s\n", fileName);

        fclose(fp);
}

void importData(Stack *s, String100 fileName)
{
        String100 folder = "./inputs/";
        FILE *fp;
        Point tempPoint;
        int top;
        int i = 0;

        if ((fp = fopen(strcat(folder ,fileName), "rt")) != NULL)
        {
                fscanf(fp, "%d", &top);

                while (i < top && i < MAX_ELEMENTS)
                {
                       fscanf(fp, "%lf %lf", &tempPoint.x, &tempPoint.y);

                       s->data[i] = tempPoint;
                       i++;
                }

                s->top = top - 1; // matches with top index

                printf("\nSuccessfully imported %s\n\n", fileName);
                fclose(fp);
        }
        else
                printf("Error reading to file.\n");
}

