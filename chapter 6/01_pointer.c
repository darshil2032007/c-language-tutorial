#include <stdio.h>

int main()
{
    int i=72;
    int k=71;
    int* j =&i;                                         //j is an integer pointer 
    printf("the address of i is %p\n",&i);
    printf("the address of i is %p\n",j);
    printf("the the value at address i is %d\n",*(&i));
    printf("the the value at address i is %d\n",*j);
    printf("the address of j is %p\n",&j);
    return 0;
}