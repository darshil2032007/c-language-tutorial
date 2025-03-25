#include <stdio.h>

int main()
{
    printf("ans of 1 \n\n\n");
    for (int i = 1; i <= 5 ; i++)
    {
        for (int j = 1; j <= 5-i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("ans of 2 \n\n\n");
    for (int i = 1; i <= 5 ; i++)
    {
        for (int j = 1; j <= i-1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 6-i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("ans of 3 \n\n\n");
    for (int i = 5; i >= 1 ; i--)
    {
        for (int j = 1; j <= 5-i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i ; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    printf("ans of 4 \n\n\n");
    for (int i = 1; i <= 5 ; i++)
    {
        for (int j = 1; j <= 5-i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i ; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}