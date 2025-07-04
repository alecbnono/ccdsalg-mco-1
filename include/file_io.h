#ifndef FILE_IO_H
#define FILE_IO_H
#include "stack.h"
#include <string.h>

typedef char String100[101];

void exportData(Stack *s, String100 fileName);
void importData(Stack *s, String100 fileName);

#endif
