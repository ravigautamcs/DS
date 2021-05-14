#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n){
    int i;
    struct Node *t, *last;
    first= new Node[sizeof(struct Node)];
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1; i<n; i++){
        t=new Node[sizeof(struct Node)];
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void Display(struct Node * p){
    while(p!=0){
        cout<<(p->data)<<endl;;
        p=(p->next);
    }
}

int main(){
    int A[]={3,5,6,10,15};
    //first= new Node[sizeof(struct Node)]; 
    create(A, 5);
    Display(first);
    return 0;
}