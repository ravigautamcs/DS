#include <iostream>
using namespace std;

struct Node{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

//recursive function for the binary search tree
Node * RSearch(Node *t, int key){
    if(t==NULL)
        return NULL;
    else if(key==t->data)
        return t;
    else if(key<t->data)
       return RSearch(t->lchild, key);
    else
        return RSearch(t->rchild, key);
}

//iterative function for the binary search tree

Node *ISearch(Node *t, int key){
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

void insert(Node *t, int val){
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
    p=(Node *)malloc(sizeof(struct Node));
    p->data=val;
    p->lchild=p->rchild=NULL;
    if(p->data<r->data)
        r->lchild=p;
    else
        r->rchild=p;
}


int main(){
    
    //this the code for the search of the element in the binary search tree

    
    return 0;
}