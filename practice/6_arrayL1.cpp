#include <iostream>
using namespace std;

class Array {
    int size;
    int length;
    int *A;
    public :
    void create(int a, int b);
    int frequency(int x);
    void Display();
};

void Array:: create(int a , int b){
    size=a;
    length=b;
    A=new int [size*sizeof(int)];
    cout<<"Enter the elements\n";
    for(int i=0; i<length; i++){
        cin>>A[i];
    }
}

int Array :: frequency(int x){
    int count =0;
    for(int i=0; i<length; i++){
        if(A[i]==x){
            count ++;
        }
    }
    return count;
}

void Array:: Display(){
    for(int i=0; i<length; i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl;
}

int main(){
    Array arr;
    int x;
    arr.create(10,5);
    arr.Display();
    cout<<"enter the element you want to check \n";
    cin>>x;
    cout<<"the Number "<<x<<" is repeated "<< arr.frequency(x)<<" times in the given list.\n";
    
    return 0;
}