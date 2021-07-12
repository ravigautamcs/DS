#include<bits/stdc++.h>
using namespace std;

void printVec(/*vector<pair<int , int >>*/ vector<int> &v){
    for(int i=0; i<v.size(); i++){
        // cout<<v[i].first<<" "<<v[i].second<<endl;
        cout<<v[i]<<"\t";
    }
    cout<<endl;
}

void printVecVV(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<"\t";
    }
    cout<<endl;
}

int main(){
    //initialisation
    // Pair of Vector
    // vector<pair<int , int>> v;

    // //taking input
    // int n; cin>>n;
    // for(int i=0; i<n; i++){
    //     int x,y; cin>>x>>y;
    //     v.push_back({x,y});
    // }
    // printVec(v);


    // Array of vectors
    // vector<int> a[3]; //this is the array of 10 vectors
    // for(int i=0; i<3 ; i++){
    //     int n; cin>>n;
    //     for(int j=0; j<n; j++){
    //         int x; cin>>x;
    //         a[i].push_back(x);
    //     }
    // }
    // for(int i=0; i<3;i++){
    //     printVec(a[i]);
    // }


    // vectors of vectors

    vector<vector<int> > v;
    int N; cin>>N;
    for(int i=0; i<N; i++){
        int n; cin>>n;
        vector<int> temp;
        for(int j=0; j<n; j++){
            int x; cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for(int i=0; i<N; i++){
        printVecVV(v[i]);
    }

    return 0;
}