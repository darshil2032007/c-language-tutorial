/* Repeat problem 7 for a custom input given by the user.*/
#include <stdio.h>
int main()
{
    int arr[3][10];
    int multi[3];
    printf("enter the 3 numbers (one by one) \n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&multi[i]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j]= multi[i]* (j+1);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("the value of arr[i][j] is %d\n",arr[i][j]);
        }
        printf(" \n");
    }
    
    return 0;
}