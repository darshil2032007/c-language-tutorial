#include <stdio.h>

int main()
{
    int A,B;
    printf("enter the first number : ");
    scanf("%d",&A);
    printf("enter the second number : ");
    scanf("%d",&B);
    A=A+B;
    B=A-B;
    A=A-B;
    printf("first number = %d second number = %d",A,B);
    return 0;
}