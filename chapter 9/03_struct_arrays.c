#include <stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];

};// semicolon is important in structure.
int main()
{
    struct employee facebook [100];
    facebook[0].code=100;   
    facebook[1].code=120;   
    facebook[2].code=980; 
    struct employee darshil={7,500000,"darshil"};// one more way to initialize structure
    printf("%d %.2f %s  \n",darshil.code,darshil.salary,darshil.name);
    
    return 0;
}