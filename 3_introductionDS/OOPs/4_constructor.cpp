#include<iostream>
using namespace std;

class Rectangle{
    public:
    int l; int b;
    Rectangle();  //this is the constructor
    void getLB(int x, int y);
    int Area();
};

//defination of a constructor;
Rectangle:: Rectangle(){
    cout<<"the rectangle is created"<<endl;
}

int Rectangle :: Area(){
    return l*b;
}

void Rectangle :: getLB(int x , int y){
    l=x; b=y;
}

int main(){

    Rectangle first;

    first.getLB(10,20);
    cout<<first.Area()<<endl;

    return 0;
}