#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int* data;
    int size;
    int front;
    int back;
};

typedef struct queue* queue; //not much important

queue new(int size)
{
    queue S;
    S = (queue)malloc(sizeof(struct queue));
    S->data = (int*)malloc(sizeof(int)*size);
    S->size = size;
    S->front = S->back = -1;
    return S;
}

void delete(queue S)
{
    free(S->data);
    free(S);
}

int dequeue(queue S)
{
    if(S->front == -1)
        return -1; //Error returning
    
    int i = S->data[S->front++];

    if(S->front > S->back) 
        S->front = S->back = -1;
    
    return i;
}

int enqueue(queue S, int i)
{
    if(S->back > S->size-1)
        return 1; // error returning

    S->data[++S->back] = i;

    if(S->back == 0)
        S->front = 0;
}

void print(queue S)
{
    for(int i=S->front; i <= S->back; i++)
        printf("%d\t", S->data[i]);
    printf("\n");
}


int main()
{
    queue S = new(10);
    print(S);
    enqueue(S, 56);
    enqueue(S, 3);
    enqueue(S, 6);
    enqueue(S, 8);
    print(S);
    printf("dequeue = %d\n", dequeue(S));
    printf("dequeue = %d\n", dequeue(S));
    printf("dequeue = %d\n", dequeue(S));
    print(S);
    return 0;
}