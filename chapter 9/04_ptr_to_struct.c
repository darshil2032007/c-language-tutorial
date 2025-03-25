#include <stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];

};// semicolon is important in structure.
int main()
{
    struct employee e1;
    e1.code=56;
    struct employee *ptr;
    ptr = &e1;
    // now we can print structure elements using:
    printf("%d\n", (*ptr).code);
    // using arrow operator
    printf("%d", ptr->code);

    return 0;
}