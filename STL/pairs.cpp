#include<bits/stdc++.h>
using namespace std;

int main(){
    //initializing the pair
    pair<int , string> p;
    // p=make_pair(2, "ravi");
    p={2,"ravi"};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={3,4};
    p_array[2]={5,6};
    swap(p_array[0], p_array[2]);
    for(int i=0; i<3; i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    //we can also take the inputs here
    return 0;
}