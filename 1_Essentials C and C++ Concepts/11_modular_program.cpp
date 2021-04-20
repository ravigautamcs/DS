#include <iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

void initialise(struct rectangle *p, int l, int b){
    p->length=l;
    p->breadth=b;
}

int area(struct rectangle r){
    return r.length*r.breadth;
}

int peri(struct rectangle r){
    return 2*(r.length+r.breadth);
}

void print_area_peri(int c, int d){
    cout<<"area"<<"\t"<<c<<endl;
    cout<<"peri"<<"\t"<<d<<endl;
}

int main(){
    
    //this is modular programming
    struct rectangle r;
    initialise(&r,10,20);
    int x=area(r);
    int y=peri(r);
    print_area_peri(x,y);

    
    return 0;
}