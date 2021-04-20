#include <iostream>
using namespace std;
int fun(int m, int n){
    if(n>1){
        return m*fun(m,n-1);
    }
    else{
        return m;
    }

}
//using loop
int fun1(int m, int n){
    int i=1;
    int pow=1;
    while(i<=n){
        pow=pow*m;
        i++;
    }
    return pow;
}

int main(){
    cout<<fun(3,3)<<endl<<fun1(3,3);
    
    return 0;
}