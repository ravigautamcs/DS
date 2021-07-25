#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head=NULL;

void create(int x){
    // struct Node *p, *t;
    // head=(struct Node *)malloc(sizeof(struct Node));
    // t=(struct Node *)malloc(sizeof(struct Node));
    
    // if(head==NULL){
    //     head->data=x;
    //     head->next=NULL;
    // }
    // else{
    //     p=head;
    //     if(x<head->data){
    //         t->next=head;
    //         head=t;
    //     }
    //     else{
    //         while(p->next->data>x){
    //             p=p->next;
    //         }
    //         t->next=p->next;
    //         p->next=t;
    //     }
    // }
}

void print(){
    struct Node *p=head;
    while(p!=NULL){
        cout<<p->data<<"\t";
        p=p->next;
    }
    cout<<endl;
}

int main(){

    create(5);
    create(2);
    create(9);
    create(70);
    create(8);
    print();

    return 0;
}