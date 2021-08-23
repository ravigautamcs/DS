#include<iostream>
using namespace std;

class Diagonal{
    private:
        int n;
        int *A;

    public :

        Diagonal(){ //constructor
            n=2;
            A=new int[n];
        }

        Diagonal(int n){
            this->n=n;
            A= new int[n];
        }
        void Set(int i, int j, int x);
        int Get(int i, int j);
        void display();
        ~Diagonal();  //this is the distructor of the allocated memory during constructor diagonal;
};

void Diagonal :: Set(int i, int j, int x){
    if(i==j){
        A[i-1]=x;
    }
}

int Diagonal :: Get(int i, int j){
    if(i==j)
        return A[i];
    else{
        return 0;
    }
}

void Diagonal :: display(){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                cout<<A[i]<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
}

Diagonal :: ~Diagonal(){
    delete [] A;
}

int main(){

    Diagonal d(4);

    d.Set(1,1,5);
    d.Set(2,2,6);
    d.Set(3,3,7);
    d.Set(4,4,8);

    d.display();

    return 0;
}