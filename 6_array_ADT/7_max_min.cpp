#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

int max(struct Array * arr){
    int max=-9999;
    for(int i=0; i<arr->length; i++){
        if(arr->A[i]>=max){
            max=arr->A[i];
        }
    }
    return max;
}

int min(struct Array * arr){
    int min=99999;
    for(int i=0; i<arr->length; i++){
        if(arr->A[i]<=min){
            min=arr->A[i];
        }
    }
    return min;
}

int main(){
    struct Array arr={{14,2,3,4,15,6,7,8,9}, 10, 9};  
    cout<<max(&arr);
    cout<<endl;
    cout<<min(&arr);
    return 0;
}