#include <iostream>
using namespace std;

struct Queue{
    int size;
    int first;
    int *s;
    int last;
};

void createQueue(){
    struct Queue q;
    cin>>q.size;
    q.first=q.last=-1;
    q.s=(int *)malloc(q.size*sizeof(int));
}

void enqueue(int key){
    if(q.last==q.size-1)
        cout<<"Queue is full"<<endl;
    q->last++;
    q->s[q->last]=key;
}

void dequeue(struct Queue *q){
    if(q->first==q->last)
        cout<<"Queue is already empty"<<endl;
    q->first=0;
    q->first++;
}

void display(struct Queue *q){
    if(q->first==q->last)
        cout<<"Queue is empty"<<endl;
    for(int i=q->first; i<=q->last; i++ ){
        cout<<q->s[i]<<"\t";
    }
}

int main(){
    
    createQueue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    return 0;
}