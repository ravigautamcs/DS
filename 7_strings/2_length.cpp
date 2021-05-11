#include <iostream>
using namespace std;

int main(){
    char name[]="ravi";
    int i=0;
    for(; name[i]!='\0'; i++){}
    cout<<"length of the string is "<<i;
    cout<<endl;
    return 0;
}