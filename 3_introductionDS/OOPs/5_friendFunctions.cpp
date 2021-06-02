#include <iostream>
using namespace std;

class Rectangle{
    int l, b;
    public:
    friend void Area(Rectangle a1); //declaration of the friend function it can access the private members of the class
    void setParameters(int x, int y);
};

void Rectangle:: setParameters(int x, int y){
    l=x; 
    b=y;
}

void Area(Rectangle a1){  //defination of the friend fuction of the class
    cout<<"area : "<<a1.l*a1.b; // it is accessing the private members of the class without the scope resolution operator
}


int main(){
    
    Rectangle a1;
    // a1.l=10;
    // a1.b=20;
    a1.setParameters(10,20);
    Area(a1);
    
    return 0;
}