#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("darshil.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("the value of number is %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("the value of number is %d\n", num);
    fclose(ptr);
    return 0;
}