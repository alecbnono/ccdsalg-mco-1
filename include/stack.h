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
void stackPush(Stack *S, Point x);
void stackPop(Stack *S);
Point stackTop(Stack *S);
int stackIsFull(Stack *S);
int stackIsEmpty(Stack *S);
Point stackNextToTop(Stack *S);
