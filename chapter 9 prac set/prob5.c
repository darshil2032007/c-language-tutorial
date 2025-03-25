// Write a program with a structure representing a complex number.
#include <stdio.h>
struct complexno{
    int real;
    int img;

};
int main()
{
    struct complexno c1={2,5};
    printf("complex number is (%d + %d i) \n",c1.real,c1.img);
    return 0;
}