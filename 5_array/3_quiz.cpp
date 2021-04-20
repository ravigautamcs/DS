  #include<stdio.h>
  #include<iostream>
  using namespace std;
  
int main( )

{
unsigned int x[4][3] ={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}; 
printf("%d\n", x);
printf("%d,%d, %d", x+3, *(x+3),*(x+2)+3);

}