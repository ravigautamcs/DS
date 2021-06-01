#include <iostream>
#include<string>
using namespace std;

typedef struct{
    string name;
    int roll;    
} students;

int main(){
    students s1, s2;

    s1.name="ravi"; s1.roll=1;
    s2.name="raja"; s2.roll=2;

    cout<<s1.name<<"\t"<<s1.roll;
    cout<< endl; 
    cout<<s2.name<<"\t"<<s2.roll; 
    
    
    return 0;
}