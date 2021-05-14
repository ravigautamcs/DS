//this code is not working properly
#include <iostream>
using namespace std;

int main(){
    char A[]="abcdefg";
    char B[]="gfeja";
    long int H=0,h=0, x=0, i;
    for(int i=0; A[i]!='\0'; i++){
        x=1;
        x=x<<(A[i]-97);
        H=H|x;
    }

    for(i=0; B[i]!='\0'; i++){
        x=1;
        x=x<<(A[i]-97);
        h=h|x;
    }

    if(H==h){
        cout<<"the words are anagram";
    }
    else{
        cout<<"the words are not anagram";
    }
    
    return 0;
}