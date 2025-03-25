#include <stdio.h>
int sum(int *x, int *y)
{
    *x = 12;
    return *x + *y;
}

int main()
{
    int a = 1, b = 6;
    printf("the sum of a and b is %d\n", sum(&a, &b));
    printf("the value of a is %d\n", a);
    return 0;
}