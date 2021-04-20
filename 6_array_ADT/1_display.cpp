#include <iostream>
#include<stdio.h>
using namespace std;
//here we are just creating an array which will be initialized later on
struct Array{
    int *A;   //a declaration of a pointer array
    int size;  // size of the array which will be taken as input in the program
    int length;  // this is the length of size of array we are going to use
};
//this is the fuction to display the content of the array
void display(struct Array arr){
    int i;
    cout<<"elements are "<<endl;
    for(int i=0; i<arr.length; i++){
        cout<<arr.A[i]<<"\t";
    }
}
int main(){
    struct Array arr;  //declared an structure of array
    cout<<"Enter size of an array";
    cin>>arr.size; //taking the input for the size of the array
   
    arr.A=new int[arr.size]; //creating the array in the heap
    arr.length=0; // initializing the length of the array
    int n;
    cout<<"Enter how no of numbers"<<endl;
    cin>>n;
    cout<<"enter the all numbers"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr.A[i];
    }
    arr.length=n; //updating the length of the array
    display(arr); //displaying the contents of the array

    return 0;
}