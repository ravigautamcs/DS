#include <iostream>
using namespace std;

int main(){
    char name[10]="ravi";
    printf("%s", name);
    gets(name);
    printf("%s", name);
    
    return 0;
}