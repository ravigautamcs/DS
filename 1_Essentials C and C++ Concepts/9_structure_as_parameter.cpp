#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct area{
    int length;
    int breadth;
};

void fun(struct area a, int l){
    a.length=l;//this will not change the actual parameters
}

//call by address
void fun1(struct area *p, int l){
    p->length=l;//this will change the actual parameters
}

int main(){

    struct area a={10,5};
    cout<<a.length<<"\t"<<a.breadth<<endl;
    fun(a,20);
    cout<<a.length<<"\t"<<a.breadth<<endl;


    //call by address
    fun1(&a,20);
    cout<<a.length<<"\t"<<a.breadth<<endl;


    
    return 0;
}