#include "stack.h"

void stackCreate(Stack *S)
{
        S->top = -1;
}

void stackPush(Stack *S, Point x)
{
        S->top += 1;
        S->data[S->top] = x;
}

void stackPop(Stack *S)
{
        S->top -= 1;
}

Point stackTop(Stack *S)
{
        return S->data[S->top];
}

int stackIsFull(Stack *S)
{
        if (S->top == MAX_ELEMENTS - 1)
                return 1;
        else
                return 0;
}

int stackIsEmpty(Stack *S)
{
        if (S->top == -1)
                return 1;
        else
                return 0;
}

Point stackNextToTop(Stack *S)
{
        return S->data[S->top-1];
}
