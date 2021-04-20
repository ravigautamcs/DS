#include <iostream>
using namespace std;

int fun(int n)
{
    if(n>0){
        return fun(n-1)+n;
    }
    return 0;
}

int fun1(int n){
    static int y=0;
    if(n>0){
        y++; int e;
        e=fun1(n-1)+y;
        return e;
    }
    return 0;
}

int main(){
    int x=5;
    int c=fun(x);
    printf("%d\n", c);

    int d=fun1(x);
    printf("%d\n", d);

    int f=fun1(x);
    printf("%d\n", f);
    
    return 0;
}