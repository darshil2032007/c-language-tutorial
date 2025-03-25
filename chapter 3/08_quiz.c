#include <stdio.h>

int main()
{
    int marks;
    printf("enter your marks:");
    scanf("%d",&marks);
    if(marks<=100 && marks>=90){
        printf("your grade is a");
    }
    if(marks<=90 && marks>=80){
        printf("your grade is b");
    }
    if(marks<=80 && marks>=70){
        printf("your grade is c");
    }
    if(marks<=70 && marks>=60){
       printf("your grade is d");
    }
    if(marks<60){
        printf("you are fail");
    }
    return 0;
}