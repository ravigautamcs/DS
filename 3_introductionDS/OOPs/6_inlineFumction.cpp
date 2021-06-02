#include <iostream>
using namespace std;

inline void max(int x, int y){  //declaration and defination of the inline fuction
    if(x>y){
        cout<<x<<" is greater.\n";
    }
    else
        cout<<y<<" is greater.\n";
}

int main(){
    int a,b;
    cin>>a>>b;
    max(a,b);  //calling the inline function but in actual since this is the inline function the code of the inline funtion is replaced at this place at the compile time so it can do all the manipulation.
    
    return 0;
}