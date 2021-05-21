#include <iostream>
using namespace std;

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n){
    struct Node *t , *last;
    first=new Node[sizeof(struct Node)];
    first->prev=first->next=NULL;
    first->data=A[0];

    last=first;

    for(int i=1; i<n; i++){
        t=new Node[sizeof(struct Node)];
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }

}

void Insert(struct Node *p, int pos, int x){
    struct Node *t, *q;
    if(pos==0){
        t=new Node ;
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else if(pos>0){
        t=new Node;
        q=first;
        for (int i=0; i<pos-1 && q ; i++){
            q=q->next;
        }
        t->data=x;
        t->next=q->next;
        t->prev=q;
        if(q->next){
            q->next->prev=t;
        }
        q->next=t;
    }
}

void Delete(struct Node *t, int pos){ //error
    struct Node *p, *q =NULL;
    p=first;
    if(pos==0){
        first=first->next;
        int x= p->data;
        delete p;
        if(first)
            first->prev=NULL;
        }
    else if(pos>0){
        p=p->next;
        q=first;
        for(int i=0; i<pos-1 && p; i++){
            p=p->next;
            q=q->next;
        }
        q->next=p->next;
        p->next->prev=q;
        int x=p->data;
        delete p;
    }
}

void Display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main(){
    int A[]={1,2,3,4,4,5,6};
    create(A, 7);
    Insert(first, 0, 10);
    Insert(first, 5, 60);
    Delete(first, 5);
    Delete(first, 0);
    Display(first);
    
    return 0;
}