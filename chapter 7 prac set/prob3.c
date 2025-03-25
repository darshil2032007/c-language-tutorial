#include <stdio.h>
/*Write a program to create an array of 10 integers and store multiplication table of 
5 in it.*/
int main()
{
    int n;
    int array[10];
    for (int i = 1; i <= 10; i++)
    {
        array[i] = i*5;    
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;
}