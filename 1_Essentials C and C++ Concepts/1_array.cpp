#include <iostream>
using namespace std;

int main(){
    
    int A[5];
    A[0]=12;
    A[1]=1;
    cout<<sizeof(A)<<endl;
    cout<<A[0]<<endl;
    printf("%d\n", A[1]);

    int b[10]={1,2,3,4,5,6};//all the other elements will be zero here
    cout<<b[7]<<"\t"<<b[8]<<endl;
    
    //using for loops for accessing all the elements

    // for(int i=0; i<n; i++){
    //     //code
    // } 

    //creating the array of our desired size
    int x;
    cin>>x;
    int c[x]={1,2,3,4,5};  //in most of the cases this is not allowed to initialize the array this way so try to avoid this kind of the initialization
    //this may not work properly

    

    return 0;
}