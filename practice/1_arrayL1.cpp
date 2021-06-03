#include <iostream>
using namespace std;

bool checkPresentInEverySegment(int A[], int x, int k, int n){
        int i;
        for(int i=0; i<n; i=i+k){
            int j;
            for(int j=0; j<k; j++)
                if(A[i+j]==x)//this will check for the every eklement of the array in that segment
                    break; // if present then it will break the loop and start again for the next segment
                
            if(j==k)  //if not found any element in the segment then the j==k so return false for the given array
                return false;

        }

        if(i==n)//this means we have transversed the complete array so return true
            return true;
        
        int j=0;  // if i<n then this means that there are less than k element in the last segment
        for(int j=i-k; j<n; j++){   //scan for all the last elements
            if(A[j]==x)
                break; //if present then break
           }

        if(j==n) //otherwise the j has incremented and j==k so it will return false
            return false;

        return true; // if the loop has already been breaked then it will return true

}


int main(){
   
   int A[]={3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3};
   int x,k,n;
    cin>>x>>k;
    n= sizeof(A)/sizeof(A[0]);
    bool result= checkPresentInEverySegment(A, x, k, n);
    if(result)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}