#include <stdio.h>

int main()
{
    int n,last_digit;
    printf("enter the number : ");
    scanf("%d",&n);
    last_digit = n%10;
    if (last_digit % 2 ==0)
    {
        printf("last digit of integer is even \n");
    }
    if (last_digit % 2 != 0){
        printf("last digit of integer is odd \n");
    }
    return 0;
}