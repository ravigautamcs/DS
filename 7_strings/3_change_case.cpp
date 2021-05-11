#include <iostream>
using namespace std;

int main(){
    char name[]="ravi";
    cout<<name<<endl;
    for(int i=0;name[i]!='\0'; i++){
        name[i]-=32;
    }
    cout<<name<<endl;
    cin>>name;
    //code for interchanging the cases of the letter in the given string
    for(int i=0; name[i]!='\0'; i++){
        if(name[i]>='A' && name[i]<='Z'){
            name[i]+=32;
        }
        else if(name[i]>='a' && name[i]<='z'){
            name[i]-=32;
        }
    }
    cout<<name;
    
    return 0;
}