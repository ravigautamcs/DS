#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};


void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void negative_leftSide(struct Array *arr){
    int i=0;
    int j=arr->length-1;
    while(i<j){
        while(arr->A[i]<0){ i++;}
        while(arr->A[j]>=0){j--;}
        if(i<j){
            swap(&arr->A[i], &arr->A[j]);
        }
    }
}

int main(){
    struct Array arr={{-6, 3, -8, 10, 5, -7, -9, 12, -4, 2}, 15, 10};
    negative_leftSide(&arr);
    for(int i=0; i<arr.length; i++){
        cout<<arr.A[i]<<"\t";
    }
    
    return 0;
}