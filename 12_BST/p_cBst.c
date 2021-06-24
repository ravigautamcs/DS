#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root=NULL;

struct Node* newNode(int key)
{
    struct Node *t;
    
        t= (struct Node *)malloc(sizeof(struct Node));
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t;
}

struct node* insert(struct node* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL)
        return newNode(key);
 
    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->lchild = insert(node->lchild, key);
    else if (key > node->key)
        node->rchild = insert(node->rchild, key);
 
    /* return the (unchanged) node pointer */
    return node;
}

void preorder(struct Node *p){
    if(p!=NULL){
        preorder(p->lchild);
        printf("%d\t", p->data);
        preorder(p->rchild);
    }
}

int main(){
    push(13);
    push(10);
    push(23);
    push(25);
    preorder(root);
    return 0;
}