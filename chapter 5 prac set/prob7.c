#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of lines : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        // i=1 1 * print
        // i=2 3 * print
        // formula=2i-1
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}