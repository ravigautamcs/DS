#include <iostream>
using namespace std;

//call by value
void swap_By_Value(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    //we use this mostly when we need some return values
}

//call by address
void swap_By_Address(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    //when need to work directly on the actual parameters then we go for call by address
}

//call by reference
void swap_By_Reference(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    //this is only present in c++
}

int main(){
    //this is present in the both C and C++

    //by passing value as a parameter of the function
    int a,b;
    a=10; b=20;
    printf("this initial value of a is %d and b is %d\n", a,b);
    swap_By_Value(a,b); //this is the calling of the function
    cout<<"this is the output we are getting after the passing value as the parameter in the function"<<endl;
    printf("a is equal to %d and b is equal to %d\n", a,b);


    //by passing the address as the parameter for the function
    swap_By_Address(&a, &b);
    cout<<"this is the output after carrying the call by address"<<endl;
    printf("a is equal to %d and b is equal to %d\n", a,b);

    //call by reference
    swap_By_Reference(a,b);
    cout<<"this is the output after carrying the call by reference"<<endl;
    printf("a is equal to %d and b is equal to %d\n", a,b);// a=10,b=20 swaping two times


    
    return 0;
}