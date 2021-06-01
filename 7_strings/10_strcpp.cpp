#include<iostream>
#include<string>

using namespace std;

int main(){
    string str1="ravi ";
    string str2="gautam";
    string str3;

    // string s[5];
    // for(int i=0; i<5; i++ ){
    //     cin>>s[i];
    // }
    
    // for(int i=0; i<5; i++ ){
    //     cout<<s[i]<<endl;
    // }

    cout<<endl;
    //copy of the string
    str3=str2;
    //concatanation of the string
    cout<<str1 + str3<<endl;
    for(int i=0; str1[i]!='\0'; i++){
        cout<<str1[i]<<"\t";
    }


}