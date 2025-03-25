#include <stdio.h>

int main()
{
    // Write a program to print multiplication table of a given number n.
    int n, i = 1;
    printf("enter the number n : ");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i++, n * i);
    }
    return 0;
}