#include <stdio.h>

int main()
{
    int array[]={10,20,30,40,50};
    int * ptr=&array[0];
    for (int i = 0; i < 5; i++)
    {
        printf("the address of array is %u\n",&array[i]);
    }
    ptr++;
    printf("the address after increment is %u\n",ptr);
    return 0;
}