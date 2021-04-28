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


int search(struct Array *arr, int key){
    for(int i=0; i<=arr->length; i++){
        if(arr->A[i]==key){
            return i;
        }
    }
    return -1;
    
}

int main(){
    struct Array arr={{1,2,3,4,5,6}, 10, 6};

    int flag=search(&arr, 10);
    if(flag==-1){
        cout<<"Unsuccesfull";
    }
    else{
        cout<<"successfully found";
    }
    return 0;
}