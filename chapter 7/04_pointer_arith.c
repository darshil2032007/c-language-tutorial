#include <stdio.h>

int main()
{
    // POINTER ARITHMETIC USING INTEGER POINTER
    int a = 6;
    int *ptr = &a;
    printf("the address of a is %u\n", &a);
    printf("the address of a is %u\n", ptr);
    ptr++;
    printf("the value of ptr(after increment) is %u\n\n", ptr);
    // increment operator increment by datatypes memory(in bytes)

    // POINTER ARITHMETIC USING CHARACTER POINTER
    char c = 'A';
    char *ptr1 = &c;
    printf("the address of c is %u\n", &c);
    printf("the address of c is %u\n", ptr1);
    ptr1++;
    printf("the value of ptr1(after increment) is %u\n\n", ptr1);
    
    // POINTER ARITHMETIC USING FLOAT POINTER
    char f = 1.4;
    char *ptr2 = &f;
    printf("the address of f is %u\n", &f);
    printf("the address of f is %u\n", ptr2);
    ptr2++;
    printf("the value of ptr2(after increment) is %u\n\n", ptr2);

    return 0;
}