#include <iostream>
using namespace std;

struct complex
{
    int a;
    int b;
    char x;// at a time this will pickup four bytes but use one byte at a time this extra memory taking is known as padding 
};

struct students
{
    int roll;
    char name[20];
    //char x;
    //we can add more information here
};

struct cards
{
    int face;
    int shape;
    int color;
};

int main(){
    
    struct complex c1;
    scanf("%d %d", &c1.a, &c1.b);
    printf("%d+i%d\n", c1.a, c1.b); //this will print the complex number
    cout<<sizeof(c1)<<endl;


    
    return 0;
}