#include<bits/stdc++.h>
using namespace std;

//initializing the array
int t[102][1002];
memset(t, -1, sizeof(t));

//recursive solution
int knapSack_rec(int *wt, int *val, int w, int n){
    if(w==0 || n==0) return 0;

    if(wt[n-1]<=w){
        return max(val[n-1]+knapSack_rec(wt,val,w-wt[n-1], n-1), knapSack_rec(wt, val, w, n-1));
    }
    else{
        return knapSack_rec(wt, val, w, n-1);
    }
}

//memoized solution - DP1 - bottom up approach
int knapSack_memo(int *wt, int *val, int w, int n){
    if(w==0 || n==0) return 0;

    if(t[n][w]!=-1) return t[n][w];

    if(wt[n-1]<=w){
        t[n][w] = max(val[n-1]+knapSack_rec(wt,val,w-wt[n-1], n-1), knapSack_rec(wt, val, w, n-1));
        return t[n][w];
    }
    else{
        t[n][w] = knapSack_rec(wt, val, w, n-1);
        return t[n][w];
    }
}

//pure dp solution
int pure(int *wt, int *val, int w, int n){
    for(int i=0; i<n+1; i++){
        for(int j=0; j<w+1; j++){
            if(i==0 || j==0) t[i][j]=0;
        }
    }

    for(int i=1; i<n+1; i++){
        for(int j=1; j<w+1; j++){
            if(wt[i-1]<=j){
                t[i][j] = max(val[i-1]+t[i-1][j-wt[i-1]], t[i-1][j]);
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }

    return t[n][w];
}

int main(){


    return 0;
}