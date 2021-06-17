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

struct Node *rInsert(struct Node *p, int key){

    struct Node *t;

    if(p==NULL)  //if the root is NULL so this will create a node and store the key value in it
    {
        t=(struct Node * )malloc(sizeof(struct Node));
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t;
    }
    //this will get executed when the root is not NULL 
    if(key<p->data)
        p->lchild = rInsert(p->lchild, key);
    else if(key>p->data)
        p->rchild = rInsert(p->rchild, key);
    
    return p;
}

struct Node * Delete(struct Node * p; int key)
{
    //code to move the ponter to the specific Node 
    if(key<p->data)
        p->lchild=Delete(p->lchild, key);
    if(key>p->data)
        p->rchild=Delete(p->rchild, key);
    //when we have actually found the Node which we want to delete
    else
    {
        //so here we will now define wheather we will take predessor or successor
        //we will define this using the height of the left subtree and the right subtree
        //where the height is less we will delete from that side only and if the height is equal then take any of them;

        if(Height(p->lchild)>Height(p->rchild)){
            q = InPre(p->lchild);
            p->data=q->data;
            p->lchild= Delete(p->lchild, q->data);
        }

    }
}


void Inorder(struct Node *p){
    if(p){
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->lchild);
    }
}

int main(){

    root = rInsert(root,10);
    rInsert(root, 20);
    rInsert(root, 30);
    rInsert(root, 40);
    Inorder(root);
    printf("\n");
    return 0;
}