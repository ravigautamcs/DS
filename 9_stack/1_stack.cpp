#include <iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *s;
};

void create(struct stack *st){
    cout<<"Enter the size of the required stack\n";
    cin>>st->size;
    st->top=-1;
    st->s=new int[st->size*sizeof(int)]; 
}

void Push(struct stack *st, int x){
    if(st->top==st->size -1){
        cout<<"stack overflow";
    }
    else{
        st->top++;
        st->s[st->top]=x;
    }
}

void Pop(struct stack *st){
    if(st->top > st->size-1){
        cout<<"Invalid position\n";
    }
    else{
        st->s[st->top]=0;
        st->top--;
    }
}

void Peek(struct stack *st, int index){
    
    cout<<st->s[index]<<endl;
}

void stackTop(struct stack *st){
    int x=st->s[st->top];
    cout<<x<<endl;
}

int isEmpty(struct stack *st){
    if(st->top<st->size-1){
        return 1;
    }
    return 0;
}

int isFull(struct stack *st){
    if(st->top==st->size-1){
        return 1;
    }
    return 0;
}

void Display(struct stack *st){
    for(int i=0; i<st->size; i++){
        
        cout<<st->s[i];
        cout<<endl;
    }
}


int main(){
    //creating the stack
    struct stack st;
    create(&st);

    cout<<"pushing the elements into the stack ADT\n";
    Push(&st, 1);
    Push(&st, 2);
    Push(&st, 4);
    Push(&st, 6);

    Display(&st);
    cout<<endl;
    // cout<<"Poping out the element from the stack\n";
    // Pop(&st);
    // Display(&st);
    cout<<"Using the peek function\n";
    Peek(&st, 2);
    cout<<"Using the stackTop function\n";
    stackTop(&st);
    cout<<endl;
    if(isEmpty(&st)==1){cout<<"the stack is empty\n";}
    if(isFull(&st)==1){cout<<"the stack is Full\n";};
     
    return 0;
}