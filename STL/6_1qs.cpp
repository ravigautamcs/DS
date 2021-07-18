#include<bits/stdc++.h>
using namespace std;


int main(){
	int t; cin>>t; 
	while(t>0){

		int bag, min;
		cin>>bag>>min;
		multiset<long long> s;
		for(int i=0; i<bag; i++){
			long long x;
			cin>>x;
			s.insert(x);
		}

		long long t_c=0;

		for(int i=0; i<min; ++i){
			auto last_it=(--s.end());
			// last_it--;
			long long cndy= *last_it;
			t_c += cndy;

			s.erase(last_it);
			s.insert(cndy/2);

		}
		cout<<t_c<<endl;


		t--;
	}


	return 0;
}