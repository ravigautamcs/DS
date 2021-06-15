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


int main(){
    
    //this the code for the search of the element in the binary search tree

    
    return 0;
}