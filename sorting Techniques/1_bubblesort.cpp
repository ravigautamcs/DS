#include <iostream>
using namespace std;

class Array{
    int size, length;
    int *A;
    public:
    void create(int a, int b);
    int sort();
    void display();
};

void Array:: create(int a,int b){
    size=a;
    length=b;
    cout<<"enter the elements of the array\n";
    for(int i=0; i<length; i++){
        cin>>A[i];
    }
    cout<<endl;
}

void swap(int *a, int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

int Array :: sort(){
    int flag=0;
    for(int i=0; i<length-1; i++){
        for(int j=0; j<length-1-i; j++){
            if(A[j]>A[j+1]){
                swap(&A[j], &A[j+1]);
                flag=1;
            }
        }
            if(flag==0)
                break;
    }
    return flag;
}

void Array:: display(){
    for(int i=0; i< length; i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl;
}

int main(){
    Array arr;
    arr.create(10, 6);
    arr.display();
    int a=arr.sort();
    if(a==0){
        cout<<"the array is already a sorted array\n";
    }
    else{
        cout<<"the sorted array is given as : ";arr.display();
    }
    
    return 0;
}