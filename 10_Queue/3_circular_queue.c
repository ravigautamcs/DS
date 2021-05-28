#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int f,r;
    int *Q;
};

void create(struct Queue *q){
    printf("enter the size of queue you want to create\n");
    scanf("%d", &q->size);
    q->f=q->r=0; //here the front and rear pointers should point initially on the 0th position.
    q->Q=(int *)malloc(q->size*sizeof(int));
}

void enqueue(struct Queue *q, int x){
    if((q->r+1)%q->size==q->f){
        printf("Queue is Full\n");
    }
    else{
        q->r=(q->r+1)%q->size;
        q->Q[q->r]=x;
    }
}

int dequeue(struct Queue *q){
    int x=-1;
    if(q->f==q->r){
        printf("Queue is Empty\n");
    }
    else{
        q->f=(q->f+1)%q->size;
        x=q->Q[q->f];
    }
    return x;
}

void display(struct Queue q){
    
    
        int i=q.f+1;
        do{
            printf("%d\n", q.Q[i]);
            i=(i+1)%q.size;
        }while(i!=(q.r+1)%q.size);
   
}

int main(){

    struct Queue q;
    create(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    display(q);
    dequeue(&q);
    printf("\n");
    display(q);

    return 0;
}