#include <stdio.h>

int main()
{
    int n, factorial=1;
    printf("enter the number : ");
    scanf("%d", &n);
    for (int i = n; i; i--)
    {
        factorial *= i;
    }
    printf("factorial = %d",factorial);
    return 0;
}