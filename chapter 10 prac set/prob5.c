#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("double.txt","r");
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    ptr = fopen("double.txt","w");
    fprintf(ptr,"%d",2*num);
    fclose(ptr);

    return 0;
}