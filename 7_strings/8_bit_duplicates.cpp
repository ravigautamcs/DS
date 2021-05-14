#include <iostream>
using namespace std;

int main(){
    char A[]="fasdafhsrra";
    long int H=0, i, x=0;
    for(i=0; A[i]!='\0'; i++){
        x=1;
        x=x<<(A[i]-97);
        if((x&H)>0){ //paranthesis is important
            cout<<"the "<<A[i]<<" is repeated ";
            cout<<endl;
        }
        else{
            H=x|H;
        }
    } 
    
    return 0;
}