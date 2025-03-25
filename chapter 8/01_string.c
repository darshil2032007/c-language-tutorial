#include <stdio.h>

int main()
{
    char string[] = "darshil";// same as string[]={'d','a','r','s','h','i','l','\0'}
    for (int i = 0; i < 7; i++)
    {
        printf("%c\n", string[i]);
    }
    return 0;
}