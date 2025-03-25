#include <stdio.h>

int main()
{
    int marks;
    printf("enter your marks : ");
    scanf("%d",&marks);
    if(marks<33){
        printf("you are fail.");
    }
    else if (marks>100){
        printf("invalid");
    }
    else{
        printf("you are pass.");
    }
    return 0;
}