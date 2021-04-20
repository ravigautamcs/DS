#include <iostream>
using namespace std;

int fun(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fun(n-1);
    }
}

int fun1(int n){
    int i=1;
    int fac=1;
    
    while(i<=n){
        fac=fac*i;
        i++;
    }
    
    return fac;
}

int main(){
    int c=fun(5);
    int d=fun1(5);
    cout<<c<<endl<<d<<endl;
    
    return 0;
}