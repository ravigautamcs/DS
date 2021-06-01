#include <iostream>
using namespace std;

class Box{
    int h;

    public:
    int l,b;
    int getHeight(void);
    void setHeight(int x);
};

void Box:: setHeight(int x){
    h=x;
}

int Box:: getHeight(void){
    return h;
}

int main(){
    Box b1;
    //b1.h=30; this is giving the error because the h is the private variable.
    b1.setHeight(10);
    cout<<b1.getHeight()<<endl;
    
    return 0;
}