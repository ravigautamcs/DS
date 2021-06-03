#include <iostream>
using namespace std;

int max(int A[], int n){
    int max=-99999;
    for(int i=0; i<n; i++){
        if(A[i]>=max)
            max=A[i];
    }
    return max;
}

int min(int A[], int n){
    int min=99999;
    for(int i=0; i<n; i++){
        if(A[i]<=min)
            min=A[i];
    }
    return min;
}

int main(){
    int n;cin>>n;
    int A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"MAX : "<<max(A, n)<<endl;
    cout<<"MIN : "<<min(A, n)<<endl;
    
    return 0;
}