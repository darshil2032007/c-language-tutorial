#include <stdio.h>

int main()
{
    int marks[5];
    printf("enter your marks : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("student's marks is %d\n",i);
    }
    
    
    return 0;
}