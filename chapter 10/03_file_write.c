#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("darshil.txt", "a");
    int num = 7;
    fprintf(fptr , "%d", num);
    fclose(fptr);
    return 0;
}