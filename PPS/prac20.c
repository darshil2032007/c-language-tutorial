#include <stdio.h>

int main()
{
    int n,last_digit,first_digit;
    printf("enter the number : ");
    scanf("%d",&n);
    last_digit = n % 10 ;
    int temp = n;
    while (temp >= 10)
    {
        temp /= 10 ;
    }
        first_digit = temp;
    printf("the sum of first and last digit is %d",first_digit + last_digit);
    return 0;
}