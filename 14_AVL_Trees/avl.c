#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *lchild;
    int data;
    //we should maintain the balance factor for every node
    int height; //by this we can get height of left subtree and right subtree then we can get the balance factor
    struct Node *rchild;
}*root=NULL;

//function for finding the height
int nodeHeight(struct Node *p){
    int Height_left, Height_right;
    // if(p && p->lchild){
    //     p->lchild->height=0;
    // }
    // if(p && p->lchild){
    //     p->lchild->height=0;
    // }

    Height_left=p && p->lchild?p->lchild->height:0;
    Height_right=p && p->rchild?p->rchild->height:0;

    //whichever is great then return that height +1;
    return Height_left>Height_right?Height_left+1:Height_right+1;

}

int balanceFactor(struct Node *p){
    // bf=hl-hr
    int Height_left, Height_right;
    Height_left=p && p->lchild?p->lchild->height:0;
    Height_right=p && p->rchild?p->rchild->height:0;

    return Height_left-Height_right;
}

//LLRotation
struct Node * LLRotation(struct Node *p){
    //taking the node pointers
    struct Node *pl=p->lchild;
    struct Node *plr=pl->rchild;
    //doing the requird changes
    pl->rchild=p;
    p->lchild=plr;
    //now updating the heights
    p->height=nodeHeight(p);
    pl->height=nodeHeight(pl);

    if(root==p){
        root=pl;
    }

    return pl;

}

//LR rotation
struct Node *LRRotation(struct Node *p){

    //taking the node pointers
    struct Node *pl=p->lchild;
    struct Node *plr=pl->rchild;

    //doing the required changes
    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;
    plr->rchild=p;
    plr->lchild=pl;

    //now updating the heights
    p->height=nodeHeight(p);
    pl->height=nodeHeight(pl);
    plr->height=nodeHeight(plr);

    if(root==p){
        root=plr;
    }

    return plr;
}

struct Node *RRRotation(struct Node *p){

    return NULL;    
}
struct Node *RLRotation(struct Node *p){

    return NULL;
}

struct Node * RInsert(struct Node *p, int key){
    struct Node *newNode=NULL;

    if(p==NULL){
        newNode=(struct Node *)malloc(sizeof(struct Node));
        newNode->data=key;
        newNode->height=1; //setting the height of the tree
        newNode->lchild=newNode->rchild=NULL;
        return newNode;
    }

    if(key<p->data){
        // p=p->lchild;
        p->lchild=RInsert(p->lchild, key);
    }
    else if(key>p->data){
        // p=p->rchild
        p->rchild=RInsert(p->rchild, key);
    }

    //at returning time we should update the height of the tree
    p->height=nodeHeight(p);

    //code for performing rotation 
    //so should know the balance factor of the node p
    if(balanceFactor(p)==2 && balanceFactor(p->lchild)==1){
        //here we need to perform LLRotation as the condition shows;
        LLRotation(p);
    }
    else if(balanceFactor(p)==-2 && balanceFactor(p->rchild)==1){
        //here we need to perform RRRotation as the condition shows;
        RRRotation(p);
    }
    else if(balanceFactor(p)==2 && balanceFactor(p->lchild)==-1){
        //here we need to perform LRRotation as the condition shows;
        LRRotation(p);
    }
    else if(balanceFactor(p)==-2 && balanceFactor(p->rchild)==1){
        //here we need to perform LLRotation as the condition shows;
        RLRotation(p);
    }
  
    return p;

}

int main(){

    root=RInsert(root, 10);
    root=RInsert(root, 5);
    root=RInsert(root, 2);



    return 0;
}