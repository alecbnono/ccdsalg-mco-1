#include <stdio.h>
#include <string.h>
#include "stack.h"

void export(Stack *s) {
        FILE* fp = fopen("output.txt", "w");
        int i;

        fprintf(fp, "%d\n", s->top);

        for (i = 0; i < s->top; i++)
                fprintf(fp, "%.6f %.6f\n", s->data[i].x, s->data[i].y);
}

void import(Stack *s)
{
        FILE *fp;
        char fileName[31];
        Point tempPoint;
        int top;
        int i = 0;

        do
        {
                printf("Enter filename (including extension): ");
                scanf("%30s", fileName);

                if (strlen(fileName) >= 30)
                        printf("Filename is too long, maximum of 30 characters only.\n");
        }
        while (strlen(fileName) >= 30);

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
