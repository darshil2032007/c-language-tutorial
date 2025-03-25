#include <stdio.h>

int main()
{
    char dk='A';
    printf("ans of 1 \n\n\n");
    for (int i = 5; i >= 1 ; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c",dk);
        }
        dk++;
        printf("\n");
    }
    printf("ans of 2 \n\n\n");
    for (int i = 5; i >= 1 ; i--)
    {
        char pk='A';
        for (int j = 1; j <= i; j++)
        {
            printf("%c",pk);
            pk++;
        }
        printf("\n");
    }
    return 0;
}