#include<bits/stdc++.h>
using namespace std;

struct matrix{
    int A[10];
    int n;
};

void Set(struct matrix *m, int i, int j, int x ){
    if(i==j){
        m->A[i-1]=x;
    }
}

int Get(struct matrix *m, int i, int j){
    if(i==j){
        return m->A[i];
    }
    else return 0;
}

void display(struct matrix m){
    int i,j;
    for(i=0; i<m.n; i++){
        for(j=0; j<m.n; j++){
            if(i==j)
                cout<<m.A[i]<<" ";
            else    
                cout<<"0"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    struct matrix m;
    m.n=5;
    Set(&m,1,1,5);
    Set(&m,2,2,6);
    Set(&m,3,3,7);
    Set(&m,4,4,8);
    Set(&m,5,5,9);

    display(m);


    return 0;
}