#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

int sum(struct Array *arr){
    int sum=0;
    for(int i=0; i<arr->length; i++){
        sum=sum+arr->A[i];
    }
    return sum;
}

float avg(struct Array *arr){
    int sum=0;
    for(int i=0; i<arr->length; i++){
        sum=sum+arr->A[i];
    }
    float avg=float(sum)/arr->length;
    return avg;
}

int main(){
    struct Array arr={{14,2,3,4,15,6,7,8,9}, 10, 9};  
    cout<<sum(&arr);
    cout<<endl;
    cout<<avg(&arr);
    return 0;
}