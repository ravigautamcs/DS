#include<stdio.h>
#include<stdlib.h>

struct Node {
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root=NULL;

void create(int key){
    struct Node *t,*r,*p;
        t=root;
    if(root==NULL){
        p=(struct Node *)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    
while(t != NULL){
        r = t;
        if (key < t->data){
            t = t->lchild;
        } else if (key > t->data){
            t = t->rchild;
        } else {
            return;
        }
    }
 
    // Now t points at NULL and r points at insert location
        p=(struct Node *)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;
 
    if (key < r->data){
        r->lchild = p;
    } else {
        r->rchild = p;
    }
}

void Inorder(struct Node *root){
    if(root){
        Inorder(root->lchild);
        printf("%d ", root->data);
        Inorder(root->lchild);
    }
}

int main(){

    create(10);
    create(20);
    create(30);
    create(40);
    Inorder(root);
    printf("\n");
    return 0;
}