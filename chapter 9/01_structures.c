#include <stdio.h>
#include <string.h>
struct employee{
    int code;
    float salary;
    char name[10];

};// semicolon is important in structure.
int main()
{
    struct employee e1;
    e1.code = 2053144;
    e1.salary = 500000.0;
    strcpy(e1.name , "Darshil");
    printf("%d %f %s \n",e1.code,e1.salary,e1.name);
    
    return 0;
}