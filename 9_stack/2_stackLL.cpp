#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
}*top=NULL;

void push (int x){
    struct Node *t;
    t=new Node [sizeof(struct Node)];
    if(t==NULL){
        cout<<"stack is full\n";
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

void Display(){
    
 struct Node *p;
 p=top;
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
 printf("\n");

}

//complete the code for POP, peek(index), stackTop, isEmpty and isFull

void isEmpty(){
    if(top==NULL){
        cout<<"Empty";
    }
    else
        cout<<"Non Empty";
}

int peek(){
    return top->data;
}


int pop(){
    struct Node *p;
    p=top;
    int c=-1;
    if(p!=NULL){
        top=p->next;
        c=p->data;
        free(p);
    }
    return c;
}

int main(){
    
    push(10);
    push(30);
    push(20);
    Display();
    pop();
    Display();
    cout<<endl;
    cout<<peek()<<endl;
    isEmpty();
    
    return 0;
}