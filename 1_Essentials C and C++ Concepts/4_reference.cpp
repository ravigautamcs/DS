#include <iostream>
using namespace std;

int main(){
    
    int a=10;
    //declaration of the reference variable
    int &r=a; //initalization of pointer variable

    //if initialized then the value for the r will or can not be changed for any of the case
    //====>>> this means that r will be always representing the a
    
    cout<<a<<"\t"<<r<<endl;
    r++;
    cout<<a<<"\t"<<r<<endl;
    
    return 0;
}