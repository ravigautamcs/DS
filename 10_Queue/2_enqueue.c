#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int f,r;
    int *Q;
};

void create(struct Queue *q, int size){
    q->size=size;
    q->Q=(int *)malloc(q->size*sizeof(int));
    q->f=q->r=-1;
}

void enqueue(struct Queue *q, int x){
    if(q->r==q->size-1){
        printf("Queue is Full\n");
    }
    else{
        q->r++;
        q->Q[q->r]=x;
    }
}

int dequeue(struct Queue *p){
    int x=-1;
    if(p->r==p->f){
        printf("queue is empty\n");
    }
    else{
        p->f++;
        x=p->Q[p->f];
    }
    return x;
}

void Display(struct Queue q){
    q.f++;
    for(int i=q.f; i<=q.r; i++){
        printf("%d\n", q.Q[i]);
    }
}

int main(){
    struct Queue q;
    // int size;
    // printf("Enter the size of the queue\n");
    // scanf("%d",&size);
    create(&q, 3);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    dequeue(&q);
    Display(q);
    return 0;
}