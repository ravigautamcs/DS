#include<iostream>
using  namespace std;

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void SelectionSort(int A[], int n){
    int i,j, k;
    for(i=0; i<n-1; i++){
        for(j=k=i; j<n; j++){
            if(A[j]<A[k])
                k=j;
        }
        swap(&A[i], &A[k]);
    }
}

void Display(int A[], int n){
    for(int i=0; i<n; i++){
        cout<<A[i]<<"\t";
    }
}

int main(){
    int A[]={8,6,3,2,5,4};
    int s=sizeof(A)/sizeof(A[0]);
    Display(A,s);
    cout<<endl;
    SelectionSort(A, s);
    Display(A,s);
    //code worked successfully
    return 0;
}