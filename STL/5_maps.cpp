#include<bits/stdc++.h>
using namespace std;

void print(map<int , string> &m){
    int n =m.size();
    cout<<"Size : "<<n<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    } 
}

int main(){
    
    //initialisation
    map<int, string> m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="edc";
    m.insert({4, "afg"});
    // map<int, string> :: iterator it;
    // for(it=m.begin(); it!=m.end(); it++){
    //     cout<<it->first<<" "<<it->second<<endl;  //we will get the output in the sorted order because the data is arranged in the sorted order by the keys
    // }
    print(m);
    //map does not store the repeated values for the same key it just replaces the previous one 
    m[5]="ajksdfahlhk";
    print(m);

    //operations on map
    auto it =m.find(3); //O(log(n))
    if(it == m.end()){
        cout<<"NO Value"<<endl;
    } else {
        cout<<it->first<<" "<<it->second;
    }

    // erase operation it can be used by the both keys as well as the value;
    m.erase(5); //O(log(n))
    print(m);

    m.clear();
    print(m);



    return 0;
}