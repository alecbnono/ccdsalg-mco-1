#include "../include/stack.h"

void stackCreate(Stack *S)
{
        S->top = -1;
}

int stackPush(Stack *S, Point x)
{
        if (!stackIsFull(S))
        {
                S->top += 1;
                S->data[S->top] = x;
                return 1;
        }
        else
                return 0;
}

Point stackPop(Stack *S)
{
        Point temp = S->data[S->top];
        if (!stackIsEmpty(S))
        {
                S->top -= 1;
                return temp;
        }
        else
        {
                return temp;
        }
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
