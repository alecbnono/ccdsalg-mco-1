#include "../include/stack.h"
#include "../include/file_io.h"
#include "../include/graham_scan2.h"

int main()
{

        Stack input;
        Stack result;
        stackCreate(&input);
        stackCreate(&result);

        importData(&input);

        fastGrahamScan(&input, &result);

        exportData(&result);

        return 0;
}
