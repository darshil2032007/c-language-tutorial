#include <stdio.h>
// Write a C program to find 1+1/2!+1/3!+1/4!+. ........... +1/n!. 
int main()
{
    int n;
    float series=0;
    printf("enter the number(n) : ");
    scanf("%d", &n);
    int fact=1;
    for (int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        series += 1.0/fact;
    }
    printf("answer : %.2f",series);
    return 0;
}