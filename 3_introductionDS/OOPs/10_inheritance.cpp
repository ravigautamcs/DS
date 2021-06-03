#include <iostream>
using namespace std;

class A{
    public:
    int a, b;
    A(){
        a=10;b=20;
    }
    A(int a , int b){
        this -> a= a;
        this -> b= b;
    }
};

class B : public A{
    public:
    int c, d;
    B(int c , int d){
        this -> c=c;
        this -> d= d;
    }
    int add ();
};

int B:: add(){
    return a+b+ c +d;
}


int main(){
    A a(10 , 20);
    B b(30 , 40);
    cout<< b.add() << endl;
    
    return 0;
}