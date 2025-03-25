#include <stdio.h>
/*Write a program to check whether the given number is prime or not.*/
int main()
{
    int number;
    printf("enter the number :  ");
    scanf("%d",&number);
    for (int i = 2; i < number; i++)
    {
        if (number%i == 0)
        {
            printf("number is not prime.");
            break;
        }
        else{
            printf("number is prime. \n");
            break;
        }

    }
    
    
    return 0;
}