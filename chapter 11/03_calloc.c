#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    printf("enter the number \n");
    scanf("%d", &n);
    // int arr[n]; this is not allowed in c.
    ptr = (int*) calloc(n , sizeof(int));
    // ptr[0] =1;
    ptr[1] =2;
    printf("%d \n",ptr[0]);
    return 0;
}