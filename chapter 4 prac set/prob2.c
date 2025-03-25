#include <stdio.h>

int main()
{
    // Write a program to print multiplication table of 10 in reversed order.
    int n=10, i=10;
    while(i>=1){
        printf("%d x %d = %d\n",n,i--,n*i);
    }
    

    return 0;
}