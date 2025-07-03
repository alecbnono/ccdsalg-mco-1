#ifndef FILE_IO_H
#define FILE_IO_H
#include "stack.h"
#include <string.h>

typedef char String30[31];

void exportData(Stack *s, String30 fileName);
void importData(Stack *s, String30 fileName);

#endif
