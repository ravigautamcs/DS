#include <iostream>
using namespace std;

class Box{
    int width;

    protected:
    int length;

    public:
    int height;
    void setWidth(int x);
    int getVolume(void);
};

class smallBox : public Box{  // this is the derived class or the child class
    public:
    void setLength(int x);
    int getLength(void);
};

int smallBox :: getLength(void){
    return length;
}

void smallBox :: setLength(int x){
    length=x;
}

void Box :: setWidth(int x){
    width=x;
}

int Box :: getVolume(void){
    return width*height*length;
}

int main(){
    Box b1;
    smallBox c1;
    b1.height=10;
    b1.setWidth(10);
    c1.setLength(10);
    // cout<<b1.getVolume();
    cout<<c1.getLength();
    
    return 0;
}