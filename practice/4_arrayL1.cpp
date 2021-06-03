#include <iostream>
using namespace std;

class Array{
    int *A;
    int size;
    int length;

    public:
    void create(int a, int b);
    void sort();
    void Display();
};

void Array :: create(int a , int b){
    size=a;
    length=b;
    A=new int[size*sizeof(int)];
    cout<<"Enter the elements\n";
    for(int i=0; i<length; i++){
        cin>>A[i];
    }
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void Array :: sort(){
    //for the passes while shorting
    for(int i=0; i<length-1; i++){

        for(int j=0; j<length-1-i; j++){
            if(A[j]>A[j+1]){
                swap(&A[j], &A[j+1]);
            }
        }

    }
}

void Array :: Display(){
    for(int i=0; i<length; i++){
        cout<< A[i]<< "\t";
    }
}

int main(){
    Array arr;
    int a, b;
    cout<<"enter the size and the length of the array respectively\n";
    cin>>a>>b;
    arr.create(a,b);
    arr.Display();
    arr.sort();
    cout<<endl;
    arr.Display();
    
    return 0;
}