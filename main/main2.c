#include <stdio.h>
#include "../include/stack.h"
#include "../include/file_io.h"
#include "../include/graham_scan2.h"

int main() {
    String100 inputFile, outputFile;
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

    fastGrahamScan(&pointStack, &hullStack);

    exportData(&hullStack, outputFile);

    return 0;
}
