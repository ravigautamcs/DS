#include<bits/stdc++.h>
using namespace std;

int main(){
    //these iterators are like the pointers ponting on the containers
    vector<int> v={1,2,3,4,5,6,7};
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<"\t";
    }
    cout<<endl;
    vector<int> :: iterator it =v.begin();
    for(it=v.begin(); it!=v.end(); it++){
        cout<<(*it)<<"\t";
    }
    cout<<endl;
    vector<pair<int, int>> vp={{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator vp_it;
    for(vp_it=vp.begin(); vp_it!=vp.end(); vp_it++){
        cout<<(vp_it->first)<<"\t"<<(vp_it->second)<<endl;  //(*it).first === it->first;
    }

    //sort method to use the for loop for accessing the element of the vector it is available on c++ 11 or more
    for(int value : v){
        cout<<value<<"\t";
    }
    cout<<endl;

    // auto a=1; this auto complete the datatype of the element so used to sort the initialization of iterators
    for(auto value : v){
        cout<<value<<"\t";
    }
    cout<<endl;
    
    return 0;
}