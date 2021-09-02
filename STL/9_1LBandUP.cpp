//for custom sorting behaviour
#include<bits/stdc++.h>
using namespace std;

int main(){

	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	sort(a, a+n); //by sorted data its time becomes O(logn) where n is the size of the data
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	//since here is the array so the upper_bound or lower_bound function will return the pointer
	int *lptr = lower_bound(a, a+n, 3);
	int *uptr = upper_bound(a, a+n, 3);
	//lower bound(val)
	// if val present then return the location of that value;
	// else return the location where the value needed to be present.
	cout<<"lower bound : "<<(*lptr)<<endl;

	// upper_bound(val);
	// always return the next location of where the val is present
	cout<<"upper_bound : "<<(*uptr)<<endl;

	return 0;
}