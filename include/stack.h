#ifndef STACK_H
#define STACK_H
#define MAX_ELEMENTS 32768

typedef struct 
{
    double x;
    double y;
} Point;

typedef struct
{
    Point data[MAX_ELEMENTS];
    int top;
} Stack;

void stackCreate(Stack *S);
int stackPush(Stack *S, Point x);
Point stackPop(Stack *S);
Point stackTop(Stack *S);
int stackIsFull(Stack *S);
int stackIsEmpty(Stack *S);
Point stackNextToTop(Stack *S);

#endif
