#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root=NULL;

struct Node* newNode(int data)
{
    struct Node *t;
    
        t= (struct Node *)malloc(sizeof(struct Node));
        t->data=data;
        t->lchild=t->rchild=NULL;
        return t;
}
  
struct Node* insert(struct Node* Node, int data)
{
    /* If the tree is empty, return a new Node */
    if (Node == NULL)
        return newNode(data);
 
    /* Otherwise, recur down the tree */
    if (data < Node->data)
        Node->lchild = insert(Node->lchild, data);
    else if (data > Node->data)
        Node->rchild = insert(Node->rchild, data);
 
    /* return the (unchanged) Node pointer */
    return Node;
}

void preorder(struct Node *p){
    if(p!=NULL){
        preorder(p->lchild);
        printf("%d\t", p->data);
        preorder(p->rchild);
    }
}

int main(){
    insert(root, 13);
    insert(root, 10);
    insert(root, 23);
    insert(root, 25);
    preorder(root);
    return 0;
}