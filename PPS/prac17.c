#include <stdio.h>

int main()
{
    int n, factorial=1;
    printf("enter the value of n : ");
    scanf("%d", &n);
    for (int i = 1; i<=n; i++)
    {
        factorial *= i;// same as factorial = factorial * i;
    }
    printf("factorial : %d",factorial);

    return 0;
}