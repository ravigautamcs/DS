#include <stdio.h>
#include<stdlib.h>
#include "Queue.h"

struct Node * root=NULL;

void Tcreate()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    create(&q, 100);

    int x;
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
        printf("%d ", p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
    printf("\n");
}

void Inorder(struct Node *p){
    if(p){
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }
    printf("\n");
}

void Postorder(struct Node *p){
    if(p){
        Postorder(p->lchild);
        printf("%d ", p->data);
        Postorder(p->rchild);
    }
    printf("\n");
}

int main()
{
    Tcreate();

    preorder(root);
    Inorder(root);
    Postorder(root);

    return 0;
}