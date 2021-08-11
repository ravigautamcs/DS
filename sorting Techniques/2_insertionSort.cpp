#include <iostream>
using namespace std;
 
 void InsertionSort(int A[], int n){
     int x, j=0, i=0;
     for(int i=1; i<n; i++){
        j=i-1;
        x=A[i];

        while(j>-1 && A[j]>x){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
     }
 }

int main(){
    // sorting of the array using the insertion sort
    int n=10; 
    int A[10];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    InsertionSort(A, n);
    for(int i=0; i<n; i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl;
    
    return 0;
}