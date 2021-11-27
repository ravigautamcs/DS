#include<bits/stdc++.h>
using namespace std;

//code for merging two list -- for both array present in the same array
void merge(int A[], int l , int mid, int h){
    int i=l,j=mid+1,k=l;
    int B[100]={0};

    while(i<=mid  && j<=h){
        if(A[i]< A[j]) B[k++]= A[i++];
        else B[k++]= A[j++];
    }
    for(; i<=mid ; i++) B[k++]= A[i];
    for(; j<=h; j++) B[k++]= A[j];

    for(i=l; i<=h; i++) A[i]= B[i];
}

// iterative merge sort
void ImergeSort(int A[], int n){
    int p, l, h, mid, i;
    for(p=2; p<=n; p=p*2){
        for(i=0; i+p-1<n; i+=p){
            l=i;
            h=i+p-1;
            mid = (l+h)/2;
            merge(A, l,mid,h);
        }
    }
    if(p/2<n){
        merge(A, 0, p/2-1, n-1);
    }
}

int main(){

    int A[]={4,2,7,3,1,5};
    cout<<"Initial Array : ";
    for(int i=0; i<6; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    ImergeSort(A, 6);
    cout<<"final sorted array using merge sort : ";
    for(int i=0; i<6; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    return 0;
}