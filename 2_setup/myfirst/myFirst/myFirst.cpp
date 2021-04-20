
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int A[] = { 1,2,3,4,5 };
    for (int x : A)
    {
        sum = sum + x;
        cout << x << endl;
    }

    cout << "sum is" <<sum<< endl;
    std::cout << "Hello World!\n";
}


