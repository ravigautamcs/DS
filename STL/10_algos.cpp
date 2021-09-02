#include<bits/stdc++.h>
using namespace std;

int main(){

	int n; cin>>n; 
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}

	for(auto val : v){
		cout<<val<<" ";
	}
	cout<<endl;
	//min element
	int min = *min_element(v.begin(), v.end());
	cout<<min<<"\n";
	//max element
	int max = *max_element(v.begin(), v.end());
	cout<<max<<"\n";
	//to find the sum of the vector;
	int sum = accumulate(v.begin(), v.end(), 0);
	cout<<sum<<"\n";
	// to find that how many times a number is repeating in the vector;
	int ct = count(v.begin(), v.end(), 5);
	cout<<ct<<"\n";
	// to get the location of the desired value;
	auto element = find(v.begin(), v.end(), 1);
	cout<<(*element)<<"\n";
	// to reverse the vector or strings
	reverse(v.begin(), v.end());
	for(auto val : v){
		cout<<val<<" ";
	}
	cout<<endl;
		//in case of strings
	string s ="thisisaday";
	reverse(s.begin(), s.end());
	cout<<s<<"\n";

    //for the case of arrays just change the starting and the ending points in the functions
    // like fun(a,a+n,val);

	return 0;
}