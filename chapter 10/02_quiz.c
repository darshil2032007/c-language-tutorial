#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("darshil2.txt", "r");
    if (ptr == NULL)
    {
        printf("the file does not exist sorry! \n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("the value of number is %d\n", num);

        fscanf(ptr, "%d", &num);
        printf("the value of number is %d\n", num);
        fclose(ptr);
    }
    return 0;
}