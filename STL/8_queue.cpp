#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(6);
    q.push(5);
    q.push(7);
    while(!q.empty()){
        cout<<q.front()<<"\t";
        q.pop();
    }
    cout<<endl;

    return 0;
}