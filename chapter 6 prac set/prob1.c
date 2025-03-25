#include <stdio.h>

int main()
{
    /*Write a program to print the address of a variable. Use this address to get the 
    value of the variable.*/
    int a;
    int*b=&a;
    printf("enter the number : ");
    scanf("%d",&a);
    printf("the address of given number is %p\n",&a);
    printf("the value at given address is %d\n",*b);

    return 0;
}