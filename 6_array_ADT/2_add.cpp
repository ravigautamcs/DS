#include <iostream>
#include<stdio.h>
using namespace std;
//here we are just creating an array which will be initialized later on
struct Array{
    int A[10];  //a declaration of a pointer array
    int size;  // size of the array which will be taken as input in the program
    int length;  // this is the length of size of array we are going to use
};

void display(struct Array arr){
    int i;
    for(int i=0; i<arr.length; i++){
        cout<<arr.A[i]<<"\t";
    }
}

void Append(struct Array * arr, int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}

void insert(struct Array *arr, int index, int value){
    if(index>=0 && index<=arr->length){
        for(int i=arr->length; i>index; i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=value;
        arr->length++;
    }
}

void del(struct Array *arr, int index){
    if(index>=0 && index<arr->length){
        for(int i=index; i<arr->length-1; i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
    }
}

int main(){
    struct Array arr={{1,2,3,4,5,6}, 10, 6};
    Append(&arr,45);
    display(arr); //displaying the contents of the array
    int x=2;
    int y=30;
    cout<<endl;
    insert(&arr, x, y);
    display(arr);
    cout<<endl;
    del(&arr, 4);
    display(arr);
    return 0;
}