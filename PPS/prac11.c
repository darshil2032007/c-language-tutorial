#include <stdio.h>

int main()
{
    char A;
    printf("enter any character : ");
    scanf("%c", &A);
    if (A >= 'a' && A <= 'z')
    {
        printf("character is lowercase.");
    }
    else if (A >= 'A' && A <= 'Z')
    {
        printf("chracter is uppercase.");
    }
    else
    {
        printf("character is any number or any special characters.");
    }

    return 0;
}