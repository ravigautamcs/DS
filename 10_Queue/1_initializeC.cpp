#include <iostream>
using namespace std;

class Queue{
    int size;
    int *s;
    int front,rear;
    public:
    void create();
    void enqueue(int x);
    void display();
    void Dequeue();
};

void Queue:: create(){
    cout<<"enter the size of the queue\n";
    cin>>size;
    s=new int[size*sizeof(int)];
    front=rear=-1;
}

void Queue :: enqueue(int x){
    if(rear==size-1){
        cout<<"Queue is FULL\n";
    }
    else{
        rear++;
        s[rear]=x;
    }
}

void Queue::display(){
    if(rear==-1){
        cout<<"Queue is EMPTY\n";
    }
    else{
        for(int i=front+1; i<=rear; i++){
            cout<<s[i]<<"\n";
        }
    }
}

void Queue:: Dequeue(){
    if(rear==-1){
        cout<<"Queue is already empty\n";
    }
    else{
        front++;
        s[front]=0;
    }
}

int main(){
    Queue st;
    st.create();
    st.enqueue(10);
    st.enqueue(20);
    st.enqueue(30);
    st.enqueue(40);
    st.display();
    st.Dequeue();
    cout<<"\n";
    st.display();
    return 0;
}