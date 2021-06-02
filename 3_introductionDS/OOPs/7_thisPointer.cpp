#include <iostream>
using namespace std;

class A{
    int a ;
    public :
        A & setData (int a){
            this-> a= a;
            return *this;
        }
        void getData(){
            cout<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(10).getData();  
    
    return 0;
}