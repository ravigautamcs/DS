#include <iostream>
using namespace std;

int main(){
    
    //creating 2d array in the heap using the pointer array
    int *A[3];
    for(int i=0; i<3; i++){
        A[i]=new int[4];
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>A[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }

    

    
    return 0;
}