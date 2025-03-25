#include <stdio.h>

int main()
{
    float a;
    printf("enter the number : ");
    scanf("%f",&a);
    if(a<0){
        printf("number is negative ");
    }
    else if(a>0){
        printf("number is positive ");
    }
    else if(a==0){
        printf("number is zero ");
    }
    return 0;
}