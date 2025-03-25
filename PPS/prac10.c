#include <stdio.h>

int main()
{
    float a, b, c;
    printf("enter the number a : ");
    scanf("%f", &a);
    printf("enter the number b : ");
    scanf("%f", &b);
    printf("enter the number c : ");
    scanf("%f", &c);

    if (a > b && a > c)
    {
        printf("the greatest number is a %f .", a);
    }
    if (b > a && b > c)
    {
        printf("the greatest number is b %f .", b);
    }
    if (c > b && c > a)
    {
        printf("the greatest number is c %.2f .", c);
    }

    return 0;
}