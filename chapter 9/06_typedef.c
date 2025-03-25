#include <stdio.h>
#include <string.h>
typedef struct employee{
    // this is used to declare user define datatype. 
    int code;
    float salary;
    char name[10];

}emp;// semicolon is important in structure.
int main()
{
    emp e1;
    e1.code = 2053144;
    e1.salary = 500000.0;
    strcpy(e1.name , "Darshil");
    printf("%d %f %s \n",e1.code,e1.salary,e1.name);
    return 0;
}
