#include<bits/stdc++.h>
using namespace std;
//grid problem -- shortest distance
int minCost(int grid[][100], int m, int n){
    int dp[100][100];

    //base case
    dp[0][0]=grid[0][0];
    //fill the first row;
    for(int c=0; c<n; c++) dp[0][c] = dp[0][c-1]+grid[0][c];
    //fill the first col
    for(int r=1; r<m; r++) dp[r][0] = dp[r-1][0] + grid[r][0];

    for(int r=1; r<n; r++){
        for(int c=1; c<n; c++){
            dp[r][c]= min(
                dp[r-1][c], dp[r][c-1]
            ) + grid[r][c] ;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<setw(3)<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    return dp[m-1][n-1];
}

int main(){
    int grid[100][100] ={
        {1,2,3},
        {4,8,2},
        {1,5,3}
    };
    int ans = minCost(grid, 3,3);
    cout<<ans;
    return 0;
}