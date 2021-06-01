#include <iostream>
using namespace std;

//initialization of the class
class Box{
    public:
    int l;
    int h;
    int w;
    
    //member function
    int getVolume(void);

};

//function using the scope resolution operator
int Box :: getVolume(void){
    return l*h*w;
}

int volume(int a, int b, int c ){
    return a*b*c;
}

int main(){
    //define c++ objects;
    Box b1, b2;
    cin>>b1.l>>b1.h>>b1.w;
    //calling of member function;
     cout<<b1.getVolume();
     cout<<endl;
    // cout<<volume(b1.l, b1.h, b1.w)<<endl;
    cin>>b2.l>>b2.h>>b2.w;
    cout<<volume(b2.l, b2.h, b2.w)<<endl;
    
    return 0;
}