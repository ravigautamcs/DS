#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
	for(string value : s){
		cout<<value<<endl;
	}
}

int main(){
	set<string> s;
	// unordered_set<string> s;
	//it stores the element in the sorted order
	s.insert("abc");
	s.insert("abcesjh");  //O(log(n)); and O(1) for unordered_set
	s.insert("abcdklf");
	s.insert("abcuire");
	s.insert("abcsdf");
	s.insert("abcdfja");

// it stores only unque elements
	auto it = s.find("abc");
	print(s);
	return 0;
}