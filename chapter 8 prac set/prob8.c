#include <stdio.h>
#include <string.h>
/*Write a program to count the occurrence of a given character in a string. */
int occur(char *string , char character)
{
    int count=0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == character)
        {
            count ++;
        }
        
    }
    return count;
}
int main()
{
    char string[] = "pizza";
    char character = 'z';
    printf("character %c is occur %d times in this string.",character,occur(string,'z'));
    return 0;
}