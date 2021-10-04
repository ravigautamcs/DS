#include<bits/stdc++.h>
using namespace std;

//ap-1
int fib(int n){
    if(n==0 || n==1) return 1;
    return n*fib(n-1);
}

//ap-2
// memoization
int memo[1000];
int fib_memo(int n){
    if(n==0 || n==1 ) return 1;
    memo[0]=memo[1] = 1;
    if(memo[n]!=-1) return memo[n];

    int ans = n*fib_memo(n-1);
    memo[n] = ans;
    return memo[n];
}

//dp- bottom up
int fib_dp(int n){
    int dp[1000]; dp[0]=dp[1]=1;
    for(int i=2; i<=n; i++){
        dp[i]=i*dp[i-1];
    }
    return dp[n];
}

//much smaller space complexity as well
int fib_space(int n){
    if(n==0 || n==1) return 1;
    int ans =1;
    for(int i=2; i<=n; i++){
        ans= ans *i;
    }
    return ans;
}

int main(){
    int n; cin>>n;
    cout<<"ap-1 solution : "<<fib(n)<<"\n";
    for(int i=0; i<=n; i++){
        memo[i]=-1;
    }
    cout<<"ap-2 memo solution : "<<fib_memo(n)<<"\n";
    cout<<"ap-3 dp solution : "<<fib_dp(n)<<"\n";
    cout<<"ap-4 dp space solution : "<<fib_space(n)<<"\n";
    return 0;
}