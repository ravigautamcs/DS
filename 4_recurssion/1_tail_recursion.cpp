//this is tail recursion
#include <iostream>
using namespace std;

void print_all(int n)
{
    if(n>0){
        cout<<n<<"\n";
        print_all(n-1);
    }
}

int main(){
    int x=3;
    //cin>>x;
    print_all(x);
    return 0;
}