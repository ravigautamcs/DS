#include<bits/stdc++.h>
using namespace std;

int memo[1000];

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    if(memo[n]!=-1){
        return memo[-1]; //if already calculated than return it as the ans;
    }
    //but if fib(n) is not calculated previously so store it in the memo after calculating
    int ans = fib(n-1)+ fib(n-2);
    memo[n]=ans;
    return ans;
}

int main(){
    int n; cin>>n;
    //empting the array
    for(int i=0; i<=1000; i++){
        memo[i]=-1;
    }
    int ans = fib(n);
    cout<<ans;
    return 0;
}