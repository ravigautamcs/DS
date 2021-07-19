#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v)
{
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << "\t";
    }
}

int main()
{
    vector<int> v;
    // int a[5];
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        // cin>>a[i];
    }
    // print(v);
    //this sorting algorithim takes the address of the starting pointer to the initial value and the next pointer to the last element till where we have to sort the elements
    // sort(a, a+5);   //this is for array
    // for(int i=0; i<5; i++){
    //     cout<<a[i ]<<"\t";
    // }
    sort(v.begin(), v.end());  //T= O(nlog(n));
    print(v);
    cout << endl;
    return 0;
}