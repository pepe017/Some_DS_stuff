#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int* data;
    int size;
    int top;
};

typedef struct stack* stack; //not much important

stack new(int size)
{
    stack S;
    S = (stack)malloc(sizeof(struct stack));
    S->data = (int*)malloc(sizeof(int)*size);
    S->size = size;
    S->top = -1;
    return S;
}

void delete(stack S)
{
    free(S->data);
}

int pop(stack S)
{
    if(S->top < 0)
        return -1; //Error returning

    
    return S->data[S->top--];
}

int push(stack S, int i)
{
    if(S->top > S->size-1)
        return 1; // error returning


    S->data[++S->top] = i;
}

void print(stack S)
{
    for(int i=0; i <= S->top; i++)
        printf("%d\t", S->data[i]);
    printf("\n");
}


int main()
{
    stack S = new(10);
    print(S);
    push(S, 56);
    push(S, 3);
    push(S, 6);
    push(S, 8);
    print(S);
    printf("pop = %d\n", pop(S));
    printf("pop = %d\n", pop(S));
    printf("pop = %d\n", pop(S));
    print(S);
    return 0;
}