#include <stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root=NULL;

//recursive function for the binary search tree
// Node * RSearch( int key){
//     struct Node *t=root;
//     if(t==NULL)
//         return NULL;
//     else if(key==t->data)
//         return t;
//     else if(key<t->data)
//        return RSearch(t->lchild, key);
//     else
//         return RSearch(t->rchild, key);
// }

//iterative function for the binary search tree

struct Node *ISearch( int key){

    struct Node *t=root;

    while(t!=NULL){

        if(key==t->data)
            return t;
        else if(key<t->data)
            t=t->lchild;
        else
            t=t->rchild;
    }
    return NULL;
}

void insert(struct Node *t, int val){
    struct Node *r=NULL, *p;
    while(t!=NULL){
        r=t;
        if(val==t->data)
            return ;
        else if(val<t->data)
            t=t->lchild;
        else
            t=t->rchild;
    }
    p=( struct Node *)malloc(sizeof(struct Node));
    p->data=val;
    p->lchild=p->rchild=NULL;
    if(p->data<r->data)
        r->lchild=p;
    else
        r->rchild=p;
}

//code for creating the binary search tree
void  create(int key){  //here the structure node is globally available so no need to give it as parameter
    struct Node *t=root;
    struct Node *r, *p;
    if(root==NULL){
        p=(struct Node *)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    while(t!=NULL)
    {
        r=t;
        if(key<t->data)
            t=t->lchild;
        else if(key>t->data)
            t=t->rchild;
        else
            return;
    }
        p=(struct Node *)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;

        if(p->data<r->data) r->lchild=p;
        else    r->lchild=p;
}

//preorder traversals
void Inorder(struct Node *p){
    if(p)
    {
    Inorder(p->lchild);
    printf("%d ", p->data);
    Inorder(p->rchild);
    }
}


int main(){
    
    //this the code for the search of the element in the binary search tree
    // struct Node *root; declared at the side of the struct defination
    create(12);
    // create(5);
    // create(30);
    create(20);
    create(8);

    Inorder(root);
    printf("\n");
    
    return 0;
}