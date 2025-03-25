#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("darshil.txt", "a");
    // char c= fgetc(ptr);
    // printf("%c",c);

    fputc('c', ptr);    // used to write character 'c' to the file
    return 0;
}