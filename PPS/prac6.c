#include<stdio.h>

int main()
{
    float c,f;
    printf("Enter the Temperature in centigrade : ",c);
    scanf("%f",&c);
    f=(1.8*c) + 32;
    printf("Temperature in Fahrenheit : %.2f ", f);


    return 0;
}