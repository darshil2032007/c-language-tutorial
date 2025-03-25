#include <stdio.h> 
// Write a program to find out which number is even or odd from list of 10 numbers using array
int main()
{
    int no[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the number(%d) : ",i+1);
        scanf("%d",&no[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (no[i]%2==0)
        {
            printf("%d number(%d) is even \n",i+1,no[i]);
        }
        else{
            printf("%d number(%d) is odd \n",i+1,no[i]);
        }
    }
    
    return 0;
}