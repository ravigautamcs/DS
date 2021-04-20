#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
    
    // this is the one of the method used to increase the size of the array in the heap of the memory
    int *p;
    p=new int[5];
    for(int i=0; i<5; i++){
        cin>>p[i];
    }
    for(int i=0; i<5; i++){
        cout<<p[i]<<"\t";
    }
    cout<<endl<<endl;

    int *q;
    q=(int*)malloc(10* sizeof(int));
    for(int i=0; i<5; i++){
        q[i]=p[i];
    }
    for(int i=5; i<10; i++){
        cin>>q[i];
    }
    delete [] p;
    p=q;
    q=NULL;
    for(int i=0; i<10; i++){
        cout<<p[i]<<"\t";
    }

    
    return 0;
}