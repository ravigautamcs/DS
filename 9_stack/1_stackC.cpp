#include <iostream>
using namespace std;

class Stack{
    int size;
    int top;
    int *s;
    public:
    void create(void);
    void push(int a);
    void Display();
    void Pop();
    void peek(int index);
    void stackTop();
    void isEmpty();
    void isFull();
};

void Stack :: create(){
    cout<<"Enter the size of the stack you want to create.\n";
    cin>>size;
    top=-1;
    s=new int[size*sizeof(int)];
}

void Stack :: push(int a){
    if(top==size-1){
        cout<<"stack is full\n";
    }
    else{
        top++;
        s[top]=a;
    }
}

void Stack :: Display(){
    if(top==-1){
        cout<<"stack is empty\n";
    }
    else{
    for(int i=0; i<=top; i++){
        cout<<s[i]<<"\n";
    }
    }
}

void Stack:: Pop(){
    if(top==-1){
        cout<<"stack is already empty\n";
    }
    else{
        s[top]=0;
        top--;
    }
}

int main(){
    Stack st;
    st.create();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.Display();
    st.Pop();
    cout<<endl;
    st.Display();

    return 0;
}