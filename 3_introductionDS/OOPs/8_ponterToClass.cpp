#include <iostream>
using namespace std;

class Rectangle{
    public:
    //constructor defination and intialization
    Rectangle (int x, int y){
        length=x;
        width=y;
    }
    int Volume(){
        return length*width;
    }

    private:
    int length;
    int width;
};

int main(){
    Rectangle r1(10,20);  
    Rectangle r2(100,20);

    Rectangle *rptr;
    rptr=&r1;
    cout<<rptr->Volume()<<endl;  
    rptr=&r2;
    cout<<rptr->Volume();  
    
    return 0;
}