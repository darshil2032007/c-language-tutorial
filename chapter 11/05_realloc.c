#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    printf("enter the number \n");
    scanf("%d", &n);
    // int arr[n]; this is not allowed in c.
    ptr = (int*) malloc(n * sizeof(int));
    ptr[0] =1;
    ptr[1] =2;
    printf("%d \n",ptr[0]);
    ptr = (int*) realloc(ptr, 10*sizeof(int));
    return 0;
}