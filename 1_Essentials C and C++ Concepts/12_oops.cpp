#include <iostream>
using namespace std;

class rectangle{
private:
int length;
int breadth;

public:
rectangle(int l, int b){
    length=l;
    breadth=b;
}

int area(){
    return length*breadth;
}

};

int main(){
    rectangle r(10,20);
    int c=r.area();
    cout<<c;   
    return 0;
}