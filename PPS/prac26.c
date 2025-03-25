#include <stdio.h>
// Write a C program to find 1+1/2+1/3+1/4+. ........ +1/n.
int main()
{
    int n;
    float series=0;
    printf("enter the number(n) : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        series += 1.0/i;
    }
    printf("answer : %.2f",series);
    return 0;
}