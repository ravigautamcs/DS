#include <iostream>
using namespace std;

void Honoi( int n, int a, int b, int c){
    if(n>0){
    
        Honoi( n-1, a,c,b);
        printf("Disc from %d to %d.\n", a,c);
        Honoi( n-1, b,a,c);
    }
}

int main(){
    Honoi(5,1,2,3);
    return 0;
}