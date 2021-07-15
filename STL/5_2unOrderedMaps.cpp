#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int , string> &m){
    int n =m.size();
    cout<<"Size : "<<n<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    } 
}

int main(){
    //almost everything is same as in the oredered maps
    //declaration
    unordered_map<int, string> m;
    m[1]="abc"; //O(1)
    m[5]="cdc";
    m[3]="edc";
    m.insert({4, "afg"});
    //the only thing is that it stores the keys in un_0rdered order
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    print(m);
    //map does not store the repeated values for the same key it just replaces the previous one 
    m[5]="ajksdfahlhk";
    print(m);

    //operations on map
    auto it =m.find(3); //O(1)
    if(it == m.end()){
        cout<<"NO Value"<<endl;
    } else {
        cout<<it->first<<" "<<it->second;
    }

    // erase operation it can be used by the both keys as well as the value;
    m.erase(5); //O(1)
    print(m);

    m.clear();
    print(m);
    return 0;
}