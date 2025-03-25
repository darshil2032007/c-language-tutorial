#include<stdio.h>

float celcius(float c){
    return (1.8*c + 32);
}
int main()
{
    float c;
    printf("enter the value of temparature in celcius : ");
    scanf("%f",&c);
    printf("fahrenheit temparature is : %.2f",celcius(c));
    return 0;
}