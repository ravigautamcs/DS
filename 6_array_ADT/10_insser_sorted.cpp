#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

void  insert_sorted(struct Array *arr, int key){
    int i=arr->length-1;
    while(arr->A[i]>key){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=key;
    arr->length++;
    //return (arr->A);
}

int check_sorted(struct Array *arr){
    for(int i=0; i<arr->length-1; i++){
        if(arr->A[i]>arr->A[i+1]){
            return -1;
        }
    }
    return 1;
}

void print(int k){
    if(k==-1){
        cout<<"NOT SORTED";
    }
    else{
        cout<<"SORTED";
    }
}

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void negative_leftSide(struct Array *arr){
    int i=0;
    int j=arr->length-1;
    if(i<j){
        while(arr->A[i]<0){ i++;}
        while(arr->A[j]>=0){j--;}
        if(i<j){
            swap(&arr->A[i], &arr->A[j]);
        }
    }
}

int main(){
    struct Array arr={{1,2,3,4,6,7,8,9}, 10, 8};
    // int *p;
    insert_sorted(&arr, 5);
    for(int i=0; i<arr.length; i++){
        cout<<arr.A[i]<<"\t";
    }
    cout<<endl;
    int flag=check_sorted(&arr);
    print(flag);
    return 0;
}