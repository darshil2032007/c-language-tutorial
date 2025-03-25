#include <stdio.h>
// Write a program to evaluate the series 1^2+2^2+3^2+……+n^2
int main()
{
    int series = 0;
    int n;
    printf("enter the number(n) : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        series += i * i;
    }
    printf("answer : %d",series);
    return 0;
}