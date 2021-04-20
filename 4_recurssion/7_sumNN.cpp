#include <iostream>
using namespace std;

int fun(int n){
    //for this case the loop will be more useful due to space complexity
    static int sum=0;
    if(n>0){
        sum=n+fun(n-1);
    }
    return sum;
}

int fun1(int n){
    //this will be more useful;
    int sum=0;
    int i=0;
    while(i<=n){
        sum =sum+i;
        i++;  
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int d=fun(n);
    cout<<d<<endl;
    int e=fun1(n);
    cout<<e<<endl;

    return 0;
}