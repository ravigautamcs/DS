#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size; 
    int length;
};

int get(struct Array * arr, int index){
    return arr->A[index];
}

int main(){
    struct Array arr={{1,2,3,4,5,6,7,8,9}, 10, 9};
    int val=get(&arr, 3);
    cout<<val;
    return 0;
}