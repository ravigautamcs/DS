#include <iostream>
using namespace std;

class Array{
    int size;
    int length;
    int *A;

    public:
    void create (int a, int b);
    void display();
    void sort();
    void Free();
};

void Array :: Free(){
    delete A;
}

void Array:: create(int a, int b){
    size=a; length=b;
    A=new int[size*sizeof(int)];
    cout<<"Enter the elements\n";
    for(int i=0; i<length; i++){
        cin>>A[i];
    }
}

void Array :: display(){
    for(int i=0; i< length ; i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl;
}

void swap(int *a, int *b){
    int temp= *a;
    *a=*b;
    *b=temp;
}

void Array :: sort(){
    for(int i=0; i<length-1; i++){
        for(int j=0; j<length-1-i; j++){
            if(A[j]>A[j+1]){
                swap(&A[j], &A[j+1]);
            }
        }
    }
}

int main(){
    
    Array arr;
    arr.create(15,12);
    arr.display();
    arr.sort();
    arr.display();
    arr.Free();
    return 0;
}