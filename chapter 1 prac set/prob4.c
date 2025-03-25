#include <stdio.h>

int main()
{
    float P,R,N;
    printf("enter the principal amount : ");
    scanf("%f",&P);
    printf("enter the rate of interest : ");
    scanf("%f",&R);
    printf("enter the number of year  : ");
    scanf("%f",&N);
    float i=(P*R*N)/100;
    printf("here is the interest : %.2f",i);
    

    return 0;
}