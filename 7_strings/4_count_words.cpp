#include <iostream>
using namespace std;

int main(){
    char name[100];
    gets(name);
    int word=0;
    for(int i=0; name[i]!='\0'; i++){
        if(name[i]==' ' && name[i-1]!=' '){
            word++;
        }
    }
    cout<<"no of words "<<word+1;
    
    return 0;
}