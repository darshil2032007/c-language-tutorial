#include <stdio.h>
/*Write a program to take string as an input from the user using %c and %s confirm 
that the strings are equal.*/
int main()
{
    char string[6];
    printf("enter the string : ");
    // scanf("%s",string);
    // printf("%s",string);
    for (int i = 0; i < 5; i++)
    {
        scanf("%c",&string[i]);
        fflush(stdin);
    }
    string[5] = '\0';
    printf("%s\n",string);
    return 0;
}