#include <stdio.h>
/*Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().*/
int sum_avrage(int x, int y)
{
    return x + y;
}
int main()
{
    int a,b;
    printf("enter the number 1 and number 2 ");
    scanf("%d%d",&a,&b);
    printf("sum of two numbers is %d and avg of two numbers is %.1f.",sum_avrage(a,b),(sum_avrage(a,b))/2.0);
    return 0;
}