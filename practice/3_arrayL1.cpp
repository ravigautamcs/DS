#include <iostream>
using namespace std;

class Array {
    int *A;
    int size;
    int length;

    public:
    void create(int size, int length);
    void Display();
    void ReverseM1();
    void ReverseM2();
};

void Array :: ReverseM2(){
    for(int i=0, j=length-1; i<j; i++, j--){
        int temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
}

void Array :: ReverseM1(){
    int *B= new int [size*sizeof(int)];
    int j=0;
    for(int i=length-1; i>=0; i--){
        B[j]=A[i];
        j++;
    }
    for(int i=0; i<length; i++){
        cout<<B[i]<<"\t";
    }
}

void Array:: create(int a , int b){
    size=a;
    length=b;
    A= new int[size*sizeof(int)];
    for(int i=0; i<length; i++){
        cin>>A[i];
    }
}

void Array :: Display(){
    for(int i=0; i<length; i++){
        cout<<A[i]<<"\n";
    }
}

int main(){
    Array arr;
    arr.create(10,5);
    //arr.Display();
    //arr.ReverseM1();
    cout<<endl;
    arr.ReverseM2();
    arr.Display();
    return 0;
}