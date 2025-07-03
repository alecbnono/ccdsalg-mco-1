#include "../include/stack.h"
#include "../include/file_io.h"
#include "../include/graham_scan1.h"

int main()
{

        Stack input;
        Stack result;
        input.top = -1;
        result.top = -1;

        importData(&input);

        slowGrahamScan(&input, &result);

        exportData(&result);

        return 0;
}
