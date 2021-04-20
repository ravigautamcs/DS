#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

void print(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<"\t";
    }
}

int * fun(int a){
    int *p;
    p=(int *)malloc(a*sizeof(int));
    for(int i=0; i<a; i++){
        p[i]=i+1;
    }
    for(int i=0; i<a; i++){
        cout<<p[i]<<"\t";
    }
    return (p);
}

int main(){
    int x=5;
    int a[5]={1,2,3,4,5};
    //printing of the elements of the array
    print(a,x);
    cout<<endl;


    //getting the return value as array from a function
    int *b;
    b=fun(5);

    
    return 0;
}