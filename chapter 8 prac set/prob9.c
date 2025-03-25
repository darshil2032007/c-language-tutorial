#include <stdio.h>
#include <string.h>
/*Write a program to check whether a given character is present in a string or not.*/

int main()
{
    char str[] = "pizza";
    char c = 'z';
    int contains = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contains = 1;
            break;
        }
        
    }
    if (contains)
    {
        printf("yes it contains! \n");
    }
    else{
        printf("no its not contains! \n");
    }
    
    return 0;
}