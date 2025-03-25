#include <stdio.h>

int main()
{
    float kilometer,meter,feet,inches,centimeter;
    printf("enter the value of distance in kilometer : ");
    scanf("%f",&kilometer);
    meter=kilometer*1000;
    feet=kilometer*3280.84;
    inches=kilometer*39370.1;
    centimeter=kilometer*100000;
    printf("conversion of kilometer to meter is %f/n conversion of kilometer to feet is %f/n conversion of kilometer to inches is %f/n conversion of kilometer to centimeter is %f/n " , meter,feet,inches,centimeter);
    return 0;
}