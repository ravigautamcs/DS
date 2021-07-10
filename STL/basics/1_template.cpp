#include <iostream>
using namespace std;

template <typename T>

T Max(T a, T b){
    if(a>b)
        return a;
    else 
        return b;
}

int main(){
    
    // cout<<Max(2,3)<<endl;
    cout<<Max('a', 'b')<<endl;
    // hence using this template we do not have to specify the datatype of the variables
    
    return 0;
}