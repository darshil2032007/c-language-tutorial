#include <stdio.h>
#include <math.h>
// Write a program to evaluate the series sum=1-x+x^2/2!-x^3/3!+x^4/4! ......... ..-x^9/9!
int main()
{
    int x;
    float series = 0;
    int sign;

    printf("enter the number(x) : ");
    scanf("%d", &x);
    for (int i = 0; i <= 9; i++)
    {
        int fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        if (i % 2 == 0)
        {
            sign = 1;
        }
        else
        {
            sign = -1;
        }
        series += sign * pow(x, i) / fact;
    }
    printf("answer : %.2f", series);
    return 0;
}