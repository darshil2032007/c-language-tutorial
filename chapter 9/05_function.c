#include <stdio.h>
#include <string.h>
struct employee{
    int code;
    float salary;
    char name[10];

};// semicolon is important in structure.
void show(struct employee e){
    printf("code = %d , salary = %.2f , name = %s",e.code,e.salary,e.name);
}
int main()
{
    struct employee e1;
    e1.code = 4546;
    strcpy(e1.name,"darshil");
    e1.salary = 500000;
    show(e1);
    return 0;
}