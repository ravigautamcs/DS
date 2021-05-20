#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*Head;

void create(int A[], int n){
    int i;
    struct Node *t, *last;
    Head= new Node[sizeof (struct Node)];
    Head->data=A[0];
    Head->next=Head;

    last=Head;

    for(int i=1; i<n; i++){
        t= new Node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void LDisplay(struct Node *p){
    do{
        cout<<p->data<<endl;
        p=p->next;
    }while(p!=Head);
}

void RDisplay(struct Node *p){
    static int flag=0;
    if(p!=Head || flag==0){
        flag=1;
        cout<<p->data<<endl;
        RDisplay(p->next);
    }
    flag=0;
}

void Insert(struct Node *h, int pos, int x){
    struct Node *p, *t;
    t=new Node;
    p=Head;
    t->data=x;
    if(pos==0){
        t->next=Head;
        while(p->next!=Head){
            p=p->next;
        }
        p->next=t;
        Head=t;
    }
    else{
        for(int i=0; i<pos-1; i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}

int main(){
    int A[]={2,3,4,5,6,7};
    create(A, 6);
    cout<<"printing of circular linked list Using the LOOP\n";
    LDisplay(Head);
    cout<<"printing of circular linked list Using the recursive display function\n";
    RDisplay(Head);
    cout<<"inserting the elements in the circular linked list\n";
    Insert(Head, 0, 10);
    Insert(Head, 4, 110);
    LDisplay(Head);
    return 0;
}