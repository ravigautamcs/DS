#include <stdio.h>
#include<stdlib.h>
// #include "Queue.h"

struct Node * root=NULL;

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Queue
{
    int size;
    int front, rear;
    struct Node **Q; //first * is because the it id denoting the poiter variable and second * is because is is containing the address of the childs
};

void create(struct Queue *q, int size){
    q->size=size;
    q->front=q->rear=0;
    q->Q=(struct Node **)malloc(q->size*sizeof(struct Node *));
}

void enqueue(struct Queue *q, struct Node * x){
    if((q->rear+1)%q->size==q->front){
        printf("Queue is full");
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}

struct Node * dequeue(struct Queue *q){
    struct Node* x =NULL;
    if(q->front==q->rear)
        printf("Queue is Empty\n");
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}

int isEmpty(struct Queue q)
{
    return q.front==q.rear;
}



void Tcreate()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    create(&q, 100);


    printf("Enter the value of root\n");
    scanf("%d", &x);

    root = (struct Node *)malloc(sizeof(struct Node));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);

    while(!isEmpty(q))
    {
        p=dequeue(&q);

        printf("Enter the value of left child of %d \n", p->data);
        scanf("%d", &x);
        if(x!=-1){
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(&q,t);
        }

        printf("Enter the value of right child of %d \n", p->data);
        scanf("%d", &x);
        if(x!=-1){
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            enqueue(&q,t);
        }
    }

}

void preorder(struct Node * p){
    if(p){
        printf("%d\t", p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void Inorder(struct Node *p){
    if(p){
        Inorder(p->lchild);
        printf("%d\t", p->data);
        Inorder(p->rchild);
    }
}

void Postorder(struct Node *p){
    if(p){
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d\t", p->data);
    }
}

int count(struct Node *p){
    int x=0,y=0;
    if(p!=NULL){
        x=count(p->lchild);
        y=count(p->rchild);
        return x+y+1;
    }
    return 0;
}

int count_deg2_nodes(struct Node *p){
    //this will count the nodes with the degree 2
    int x,y;
    if(p!=NULL){
        x=count_deg2_nodes(p->lchild);
        y=count_deg2_nodes(p->rchild);
        if(p->lchild && p->rchild){
            return x+y+1;
        }
        else
            return x+y;
    }
    return 0;
}

int main()
{
    Tcreate();

    preorder(root);
    printf("\n");
    Inorder(root);
    printf("\n");
    Postorder(root);
    printf("\n");
    int x=count(root); //this will print the no of nodes
    printf("%d \n", x);
    printf("the nodes with the degree 2 are %d.\n", count_deg2_nodes(root));
    //similiarly we can do more operation on trees

    return 0;
}