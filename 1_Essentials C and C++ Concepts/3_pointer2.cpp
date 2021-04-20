#include <iostream>
#include<stdlib.h>
using namespace std;

int main(){
    
    int *p;
    //p=(int *)malloc(5*sizeof(int)); //allocation of memory in the heap of the main memory in c language

    //method in c++ for the allocation of the memory
    p=new int[5];

    p[0]=10; p[1]=20; p[2]=30; p[3]=40; p[4]=50;

    for(int i=0; i<5; i++){
        cout<<p[i]<<"\t";
    }


    //deletion/deallocation of the allocated memory in the heap
    //in the c++ language
    delete [ ] p;

    //in the c language
    //free(p);
    return 0;
}