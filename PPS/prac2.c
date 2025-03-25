#include<stdio.h>

int main()
{
    float h,b,area;
    printf("Enter the height of triangle = ",h);
    scanf("%f",&h);
    printf("Enter the base of triangle = ",b);
    scanf("%f",&b); 
    area = 0.5*h*b;
    printf("The area of triangle = %f  ", area);
    
    return 0;
}