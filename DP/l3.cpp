#include<bits/stdc++.h>
using namespace std;
const int inf = (int)1e9;

// FIRST APPROACH
int solve(int n){
    if(n==1) return 1;
    static int count=0;
    if(n%3==0){
        n=n/3;
        count++;
        solve(n);
    }
    else if(n%2==0){ 
        n=n/2;
        count ++;
        solve(n);
    }
    else{
        n=n-1;
        count ++;
        solve(n);
    }
    return count;
}

//SECOND APPROACH
int red(int n){
    if(n==1) return 0;
    int q1=inf,q2=inf,q3=inf;

    if(n%3==0) q1= 1+red(n/3);
    if(n%2==0) q2= 1+red(n/2);
    q3=1+red(n-1);

    return min(q1, min(q2,q3));

}

//using memoization;
int memo[10000];
int app3solve(int n){
    // memo[1]=0;
    if(n==1) return 0;
    int q1=inf,q2=inf,q3=inf;
    if(memo[n]!=-1) return memo[n]; //because we already computed

    if(n%3==0) q1= 1+app3solve(n/3);
    if(n%2==0) q2= 1+app3solve(n/2);
    q3=1+app3solve(n-1);

    memo[n] = min(q1, min(q2,q3));//memoizing the answer
    return memo[n];

}

//FOURTH APPROACH -- dp bottom up
int reduceNo_dp(int n){
    int dp[10000]={};
    fill(dp, dp+1000, -1);

    dp[1]=1,dp[2]=1,dp[3]=1;
    for(int curNum=4; curNum<=n; ++curNum){
        int q1 = inf, q2=inf, q3= inf;
        if(curNum%3 == 0 ) q1=1+dp[curNum/3];
        if(curNum%2 == 0 ) q2=1+dp[curNum/2];
        q3=1+dp[curNum-1];
        dp[curNum]= min(q1,min(q2,q3));
        }
    return dp[n];
}

int main(){

    //min steps to reduce to zero;
    int n ; cin>>n;
    // int ans = solve(n);
    // int ans = red(n);
    // for(int i=0; i<=10000; i++){
    //     memo[i]=-1;
    // } //alternate way to do this
    // fill(memo, memo+n+1, -1);
    // int ans= app3solve(n);
    int ans = reduceNo_dp(n);
    cout<<ans;
    return 0;
}