//this is head recursion
#include <iostream>
using namespace std;
void print_all(int n){
    if(n>0){
        print_all(n-1);
        cout<<n<<endl; //printing is done at returning time
    }
}
int main(){
    
    int x;
    cin>>x;
    print_all(x);

    return 0;
}