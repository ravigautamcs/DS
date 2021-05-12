#include <iostream>
using namespace std;

int main(){
    char name[100]="ravi1%23";
    int val=0;
    for(int i=0; name[i]!='\0'; i++){
        if((name[i]>='A' && name[i]<='Z') || (name[i]>='a' && name[i]<='z') || (name[i]>=48 && name[i]<=57)){
            val++;
        }
        else{
            val=0;
            break;
        }
    }
    if(val==0){
        cout<<"Please enter a valid username";
    }
    else{
        cout<<"this is a valid username";
    }
    
    return 0;
}