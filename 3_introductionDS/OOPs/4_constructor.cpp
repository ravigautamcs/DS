#include<iostream>
using namespace std;

class Rectangle{
    public:
    int l; int b;
    //Rectangle();  //this is the constructor
    //a defualt constructor does not have any parameter but if we need then we can have the parameters too
    Rectangle(int x);
    //the class destructor;
    ~Rectangle(); //this does not need any parameters
    void getLB(int x, int y);
    int Area();
};

//defination of the constructor when parameter is given
Rectangle::Rectangle(int x){
    cout<<"the rectangle is formed with the the of : "<< x << " cm" <<endl;
}

//destructor definition
Rectangle::~Rectangle(){
    cout<<"the rectangle is successfully deleted."<<endl;
}

//defination of a constructor without the parameter;
// Rectangle:: Rectangle(){
    // cout<<"the rectangle is created"<<endl;
// }

int Rectangle :: Area(){
    return l*b;
}

void Rectangle :: getLB(int x , int y){
    l=x; b=y;
}

int main(){

    // Rectangle first;
    Rectangle first(10); // formation of the class objects when a constructor with the paraneters is there in the class;

    first.getLB(10,20);
    cout<<first.Area()<<endl;

    return 0;
}