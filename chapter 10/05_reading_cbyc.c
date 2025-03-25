#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("darshil.txt", "r");

    while (1)
    {
        ch = fgetc(ptr); // when all the content of a file has been read breakthe loop!
        printf("%c",ch);
        if (ch == EOF)
        {
            break;
        }
        
    }
    return 0;
}