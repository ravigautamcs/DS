#include <iostream>
#include<stdlib.h>
using namespace std;

struct area{
    int length;
    int breadth;
};

int main(){  
    struct area a1={10,5};
    //declaration of the structure pointer
    struct area *p=&a1;
    //accessing the data using the structure pointer
    (*p).length=20;
    cout<<a1.length<<"\t"<<p->length<<endl;
    p->length=15;
    cout<<a1.length<<"\t"<<p->length<<endl;


    //how to do this stuff dynamically in the heap memory
    struct area *p1, *p2; //in the c++ language we can skip the struct keyword while creating a struct variable
    p1=(struct area *)malloc(sizeof(struct area));// in c program
    p2=new area; // in c++ program

    //accessing that memory
    p1->length=30;
    p1->breadth=40;
    int c=(p1->length)*(p1->breadth);
    cout<<c<<endl;

    delete [] p2;
    free(p1);
    return 0;
}