#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

struct Array * get_union(struct Array *arr1, struct Array *arr2){
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
    
    int i, j,k;
     i=j=k=0;
    while(i<arr1->length && j<arr2->length){
        
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k]=arr1->A[i];
            k++; i++;
        }
        else if(arr2->A[j]<arr1->A[i]){
            arr3->A[k]=arr2->A[j];
            k++; j++;
        }
        else{
            arr3->A[k]=arr1->A[i];
            k++; j++; i++;
        }
    }
        for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
        for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];
        arr3->length=k;
        arr3->size=10;
    return arr3;

}

struct Array * intersection(struct Array *arr1, struct Array *arr2){
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
    
    int i, j,k;
     i=j=k=0;
    while(i<arr1->length && j<arr2->length){
        
        if(arr1->A[i]<arr2->A[j]){
            //arr3->A[k]=arr1->A[i];
             i++;
        }
        else if(arr2->A[j]<arr1->A[i]){
            //arr3->A[k]=arr2->A[j];
             j++;
        }
        else{
            arr3->A[k]=arr1->A[i];
            k++; j++; i++;
        }
    }
        // for(;i<arr1->length;i++)
        // arr3->A[k++]=arr1->A[i];
        // for(;j<arr2->length;j++)
        // arr3->A[k++]=arr2->A[j];
        arr3->length=k;
        arr3->size=10;
    return arr3;

}

struct Array * difference(struct Array *arr1, struct Array *arr2){
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
    
    int i, j,k;
     i=j=k=0;
    while(i<arr1->length && j<arr2->length){
        
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k]=arr1->A[i];
            k++; i++;
        }
        else if(arr2->A[j]<arr1->A[i]){
            //arr3->A[k]=arr2->A[j];
             j++;
        }
        else{
            //arr3->A[k]=arr1->A[i];
             j++; i++;
        }
    }
        for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
        // for(;j<arr2->length;j++)
        // arr3->A[k++]=arr2->A[j];
        arr3->length=k;
        arr3->size=10;
    return arr3;

}

void Display(struct Array arr)
{
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
    cout<<arr.A[i]<<"\t";
}

int main(){
    struct Array arr1={{1,2,4,5,6}, 10, 5};  
    struct Array arr2={{1,2,5,6,7}, 10, 5};
    struct Array *arr3;  
    //arr3=get_union(&arr1, &arr2);
    //arr3=intersection(&arr1, &arr2);
    arr3=difference(&arr1, &arr2);
    Display(*arr3);
    return 0;
}