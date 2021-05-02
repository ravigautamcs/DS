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

int Rbinsearch(struct Array *arr, int l, int h, int key){
    int mid=(l+h)/2;
    if(l==h){
        return -1;
    }
    else if(key==arr->A[mid]){
        return mid;
    }
    else if(key>arr->A[mid]){
        l=mid+1;
        return Rbinsearch(arr, l, h, key);
    }
    else{
        h=mid-1;
        return Rbinsearch(arr, l, h, key);
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
    int flag=binary(&arr, l, h, 5 );
    print(flag);
    cout<<endl;
    int flag1=Rbinsearch(&arr, l, h, 5);
    print(flag1);
    cout<<endl;
    return 0;
}