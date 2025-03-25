#include <stdio.h>

int main()
{
    float a1,a2,b1,b2,b3,b4;
    printf("enter the value of a1 : ");
    scanf("%f",&a1);

    printf("enter the value of a2 : ");
    scanf("%f",&a2);
     b1 = a1 + a2 ;
     b2 = a1 * a2 ;
     b3 = a1 - a2 ;
     b1 = a1 + a2 ;
     b4 = a1 / a2 ;
    printf("addition is %f\n multiplication is %f\n subtract is %f\n division is %f",b1,b2,b3,b4);


    return 0;
}