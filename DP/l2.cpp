//bottom up approach
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    int dp[1000];
    dp[0]=0;
    dp[1]=1;

    for(int curNum=2; curNum <= n; ++curNum ){
        dp[curNum]= dp[curNum-1] + dp[curNum-2];
    }
    return dp[n];
}

int main(){
    int n; cin>>n;
    int ans = fib(n);
    cout<<ans;
    return 0;
}