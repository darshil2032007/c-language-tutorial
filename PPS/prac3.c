#include<stdio.h>

int main()
{
    float p,r,n,i;
    printf("Enter the principle amount : ", p);
    scanf("%f",&p);
    printf("Enter the simple interest : ", r);
    scanf("%f",&r);
    printf("Enter the year : ", n);
    scanf("%f",&n);
    i=(p*r*n)/100;
    printf("interest=%f",i);

    return 0;
}