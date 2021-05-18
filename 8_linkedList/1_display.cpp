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

void Display_rec( struct Node *p){
    if(p!=NULL){
        cout<<p->data<<endl;
        Display_rec(p->next);
    }
}

int Length(struct Node *p){
    //this is using the loop 
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}

int RLength(struct Node *p){
    if(p==NULL){
        return 0;
    }
    else{
        return RLength(p->next)+1;
    }
}

int Sum(struct Node *p){
    int sum=0;
    while(p!=NULL){
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}

int RSum(struct Node *p){
    if(p==NULL){
        return 0;
    }
    else{
        return RSum(p->next)+(p->data);
    }
}

int Maximum(struct Node * p){
    int max=-99999;
    while(p!=NULL){
        if(p->data>=max){
            max=p->data;
        }
        p=p->next;
    }
    return max;
}

int LSearch(struct Node *p, int key){
    while(p!=NULL){
        if(key==p->data){
            return 1;
        }
        p=p->next;
    }
    return 0;
};

int RLSearch(struct Node *p, int key){
    if(p==NULL){
        return 0;
    }
    else if(key==p->data){
        return p->data;
    }
    return RLSearch(p->next, key);
}

void Print(int x){
    if(x==0){
        cout<<"Not Found";
    }
    else{
        cout<<"Key found";
    }
}

void Insert(int pos, int x){
    Node *p, *t;
    if(pos==0){
        t=new Node;
        t->data=x;
        t->next=first;
        first=t;
    }
    else if(pos>0){
        p=first;
        for(int i=0; i<pos-1 && p; i++){
            p=p->next;
        }
        if(p){
        t=new Node;
        t->data=x;
        t->next=p->next;
        p->next=t;
        }
    }
}

int main(){
    int A[]={3,5,16,10,15};
    //first= new Node[sizeof(struct Node)]; 
    create(A, 5);
    Display(first);
    cout<<"printing the data using the recursive display function"<<endl;
    Display_rec(first); //using recursive function
    cout<<endl;
    cout<<"using loop : "<<Length(first)<<" using the recursive call : "<<RLength(first)<<endl;
    cout<<"Calculating the sum of the elements of the node : "<<endl;
    cout<<"using loop : "<<Sum(first)<<" using the recursive call : "<<RSum(first)<<endl;
    cout<<"printing the maximum value in the linked list "<<endl;
    cout<<Maximum(first)<<endl;
    cout<<"Linear Search"<<endl;
    int a=LSearch(first, 115);
    Print(a);
    cout<<endl;
    cout<<"searching using the recursive call : "<<RLSearch(first, 115);
    cout<<"printing the updated Node : "<<endl;
    Insert(5, 130);
    Display(first);
    return 0;
}