#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

int binary(struct Array *arr, int l, int h, int key){
    if(l<=h){
        int mid=(l+h)/2;
    if(key==arr->A[mid]){
        return mid;
    }
    else if(key<arr->A[mid]){
        h=mid-1;
        return binary(arr, l, h, key);
    }
    else if(key>arr->A[mid]){
        l=mid+1;
        return binary(arr, l, h, key);
    }
    return -1;
    }
    else{
        return -1;
    }
}



void print(int flag){
    if(flag==-1){
        cout<<"NOT FOUND";
    }
    else{
        cout<<"KEY FOUND";
    }
}

int main(){
    struct Array arr={{1,2,3,4,5,6,7,8,9}, 10, 9};
    int l=0;
    int h=arr.length;
    int flag=binary(&arr, l, h, 22 );
    print(flag);
    return 0;
}