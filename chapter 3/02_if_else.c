#include <stdio.h>

int main()
{
    // valid operaters;
    // == for equal
    // >= for greater or equal
    // <= for less or equal
    // < lessthan , > greaterthan
    // != for not equal
    int a;
    printf("enter any number : ");
    scanf("%d", &a);
    if (a > 7)

    {
        printf("your number is greater than 7 ");
        // Statements if condition is true
    }
    else
    {
        printf("your number is less than 7");
        // Statements if condition is false
    }
    return 0;
}