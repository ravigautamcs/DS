#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int front, rear;
    int *Q;
};

void create(){
    struct Queue q;
    printf("Enter the size of the queue\n");
    scanf("%d", &q.size);
    q.Q=(int *)malloc(q.size*sizeof(int));
    q.front=q.rear=-1;
}


int main(){
    create();
    return 0;
}