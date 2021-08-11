#include<iostream>
using namespace std;

int findmax(int a[], int n){
    int max=-99999;
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}

void countSort(int a[], int n){
    int i,j,max;
    max= findmax(a,n);

    int *c;
    c = (int *)malloc(max*sizeof(int));
    for(i=0; i<max+1; i++){
        c[i]=0;
    }
    for(int i=0; i<n; i++){
        c[a[i]]++;
    }
    i=0, j=0;
    while(i<max+1){
        if(c[i]==0)
            i++;
        else{
            a[j++]=i;
            c[i]--;
        }
    }
}

int main(){
    int a[9]={9,8,7,6,5,4,3,2,1};
    countSort(a,9);
    for(int i=0; i<9; i++){
        cout<<a[i]<<"\t";
    }
    cout<<"\n";
    return 0;
}