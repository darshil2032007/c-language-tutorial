#include <stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];

};// semicolon is important in structure.
int main ()
{
    struct employee e1,e2,e3;
    printf("enter the code of employee e1 :  \n");
    scanf("%d",&e1.code);

    printf("enter the salary of employee e1 :  \n");
    scanf("%f",&e1.salary);

    printf("enter the name of employee e1 :  \n");
    scanf("%s",&e1.name);

    printf("enter the code of employee e2 :  \n");
    scanf("%d",&e2.code);

    printf("enter the salary of employee e2 :  \n");
    scanf("%f",&e2.salary);

    printf("enter the name of employee e2 :  \n");
    scanf("%s",&e2.name);

    printf("enter the code of employee e3 :  \n");
    scanf("%d",&e3.code);

    printf("enter the salary of employee e3 :  \n");
    scanf("%f",&e3.salary);

    printf("enter the name of employee e3:  \n");
    scanf("%s",&e3.name);

    printf("e1 = %d %f %s\n",e1.code,e1.salary,e1.name);

    printf("e2 = %d %f %s\n",e2.code,e2.salary,e2.name);

    printf("e3 = %d %f %s\n",e3.code,e3.salary,e3.name);
    
    return 0;
}