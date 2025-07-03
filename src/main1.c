#include <stdio.h>
#include <stdlib.h>
#include "../include/stack.h"
#include "../include/file_io.h"
#include "../include/graham_scan1.h"

typedef char String30[31];

int main() {
    String30 inputFile, outputFile;
    Stack pointStack;
    Stack hullStack;
    pointStack.top = -1;
    hullStack.top = -1;

    do {
        printf("Enter input file name and extension: ");
        scanf("%s", inputFile);
        if (strlen(inputFile) >= 30)
            printf("File name is too long. Maximum of 30 characters only.\n");
    } while (strlen(inputFile) >= 30);

     do {
        printf("Enter output file name and extension: ");
        scanf("%s", outputFile);
        if (strlen(outputFile) >= 30)
            printf("File name is too long. Maximum of 30 characters only.\n");
    } while (strlen(outputFile) >= 30);

    importData(&pointStack, inputFile);

    slowGrahamScan(&pointStack, &hullStack);

    exportData(&hullStack, outputFile);
}