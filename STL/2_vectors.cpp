#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> /*v*/ &v){ //here also one new copy of v is creating taking 0(n) so to avoid this use the reference pointer
    cout<<"size : "<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<"\t";
    }
    cout<<endl;
}

int main(){

    //declaration
    vector<int> v;   //initial size zero
    // vector<int> v(5);   //initial with size 5;
    // vector<int> v(5, 3);   //initial with size 5 and all the values initialized with value 3;
    int n;
    cin>>n;
    //inseting the elements
    for(int i=0; i<n; ++i){
        int x;
        cin>>x;
        v.push_back(x);     //this has time complexity of O(1);
    }
    printVec(v);
    // v.pop_back();  //pop out the last element of the vector;
    // printVec(v);

    //for copying the elements from one vector to other
    vector<int> v1=v;   //O(n) time complexity here we can also the reference to reduce the time complexity
    printVec(v1);
    return 0;
}