#include <iostream>
using namespace std;

int main(){
    
    int a=10;
    cout<<a<<endl;
    int *p;
    p=&a;
    cout<<*p<<endl;

    //pointer to an array

    int b[5]={1,2,3,4,5};
    int *q;
    q=b; //initializing the pointer array
    for(int i=0; i<5; i++){
        //cout<<b[i]<<"\t";
        //cout<<endl;
        cout<<q[i]<<"\t";//here we can use the pointer name as the name of the array

    }

    
    return 0;
}