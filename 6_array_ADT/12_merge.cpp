#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

struct Array * Merge(struct Array *arr1, struct Array *arr2){ //return a pointer structure array
    int i, j, k;
    i=j=k=0;

    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array)); //allocation of memory in the heap
     while(i<arr1->length && j<arr2->length)
        {
        if(arr1->A[i]<arr2->A[j])
        arr3->A[k++]=arr1->A[i++];
        else
        arr3->A[k++]=arr2->A[j++];
        }
        for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
        for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];
        arr3->length=arr1->length+arr2->length;
        arr3->size=10;
 
        return arr3;
    }



void Display(struct Array arr)
{
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
}

int main(){
    struct Array arr1={{1,3,5,7,9},10,5};
    struct Array arr2={{2,4,6,8,10},10,5};
    struct Array *arr3;//declaration of an pointer struct array
    
    arr3=Merge(&arr1, &arr2);
    Display(*arr3);
    return 0;
}