#include <iostream>
using namespace std;

class Rectangle{
    public:
    static int objectCount;
    //constructor initialisation
    Rectangle (int a, int b){
        length=a;
        width=b;

        objectCount++;
    }

    private:
    int length, width;
};

int Rectangle :: objectCount=0;



int main(){
    Rectangle r1(2,3);
    Rectangle r2(3,3);
    Rectangle r4(6,3);
    cout<<Rectangle::objectCount<<endl;

    
    return 0;
}