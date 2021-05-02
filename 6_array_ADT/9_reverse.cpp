#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

int * reverse1(struct Array * arr){
    int B[arr->length];
    for(int i=0, j=arr->length-1; i<arr->length; i++, j--){
        B[i]=arr->A[j];
    }
    for(int i=0; i<arr->length; i++){
        arr->A[i]=B[i];
    }
    return (arr->A);
}

int main(){
    struct Array arr={{1,2,3,4,5,6,7,8,9}, 10, 9};
    int *p;
    p=reverse1(&arr);
    for(int i=0; i<arr.length; i++){
        cout<<*(p+i)<<"\t";
    }
    return 0;
}