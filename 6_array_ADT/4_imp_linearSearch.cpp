#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

void display(struct Array *arr){
    for(int i=0; i<arr->length; i++){
        cout<<arr->A[i]<<"\t";
    }
}

void swap(int *x, int *y){
    int temp=*x;
    *y=*x;
    *x=temp;
}

int linearSearch(struct Array *arr, int key ){
    for(int i=0; i<arr->length; i++){
        if(arr->A[i]==key){
            swap(arr->A[i], arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

int main(){
    struct Array arr={{1,2,3,4,5,6,7}, 10, 7};
    display(&arr);
    cout<<endl;
    int flag=linearSearch(&arr, 4 );
    if(flag==-1){
        cout<<"unsuccessfull to find the key in the given array";
    }
    else{
        cout<<"successfully found the given key in the given array. Well performed Bro!!";
    }
    return 0;
}