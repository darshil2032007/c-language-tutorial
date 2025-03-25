#include <stdio.h>

int main()
{
    int radius,height;
    float pi=3.14;
    printf("enter the value of radius and height : ");
    scanf("%d%d",&radius,&height);
    float area= pi*radius*radius*height ;
    printf("area of rectangle is %.2f metersquare.",area);
    return 0;
}