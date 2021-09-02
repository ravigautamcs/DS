#include<bits/stdc++.h>
using namespace std;

int main(){

	//lambda function : syntax to write the temporary type functions;
	// auto sum = [](int x, int y){ return x+y;};
	// cout<<sum(4,3);

	vector<int> v={2,3,5};
	//check wheathet the values positive
	cout<<all_of(v.begin(), v.end(), [](int x){ return x>0;})<<"\n";
	cout<<any_of(v.begin(), v.end(), [](int x){return x>0;})<<"\n";
	cout<<none_of(v.begin(), v.end(), [](int x){return x>0;})<<"\n";
	cout<<endl;
	//check wheather multiple of 2 or not
	cout<<all_of(v.begin(), v.end(), [](int x){ return x%2==0;})<<"\n";
	cout<<any_of(v.begin(), v.end(), [](int x){return x%2==0;})<<"\n";
	cout<<none_of(v.begin(), v.end(), [](int x){return x%2==0;})<<"\n";
	return 0;
}