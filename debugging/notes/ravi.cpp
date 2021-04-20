Anand Gupta3:31 PM
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
float *ptr, sum = 0.0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (float*) malloc(n * sizeof(float));
     if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter elements: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%f", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %.2f", sum);
      free(ptr);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
      int* ptr;
    int n, i;
      n = 5;
    printf("Enter number of elements: %d\n", n);
      ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
          printf("Memory successfully allocated using malloc.\n");
         for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;         }
        printf("The elements of the array are: ");
        
for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }
      return 0; }
Anand Gupta3:36 PM
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr;
    int n, i;
        n = 5;
    printf("Enter number of elements: %d\n", n);
    ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
       printf("Memory successfully allocated using calloc.\n");
       for (i = 0; i < n; ++i) {
         ptr[i] = i + 1;
      }
        printf("The elements of the array are: ");
        
 
for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }
    return 0;}
Anand Gupta3:38 PM
#include <stdio.h>
#include <stdlib.h>

int main()
{     int *ptr, *ptr1;
    int n, i;
      n = 5;
    printf("Enter number of elements: %d\n", n);
      ptr = (int*)malloc(n * sizeof(int));
      ptr1 = (int*)calloc(n, sizeof(int));
      if (ptr == NULL || ptr1 == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
                 printf("Memory successfully allocated using malloc.\n");
          free(ptr);
    
printf("Malloc Memory successfully freed.\n");
          printf("\nMemory successfully allocated using calloc.\n");
          free(ptr1);
        printf("Calloc Memory successfully freed.\n");
    }
      return 0; }