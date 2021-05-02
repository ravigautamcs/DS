#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

void set(struct Array * arr, int index, int num){
    arr->A[index]=num;
}

int main(){
    struct Array arr={{1,2,3,4,5,6,7,8,9}, 10, 9};  
    cout<<arr.A[4];
    cout<<endl;
    set(&arr, 4, 50);
    cout<<arr.A[4];
    return 0;
}