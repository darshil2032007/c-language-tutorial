#include <stdio.h>
// Write a program to find maximum element from 1-Dimensional array.
int main()
{
    int n;
    printf("enter the number(n) : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d number : ",i+1);
        scanf("%d",&arr[i]);
        
    }
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    
    printf("maximum number is %d \n",max);
    return 0;
}