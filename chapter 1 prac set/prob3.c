#include <stdio.h>

int main ()
{
    float celcius, fahrenheit;
    printf("enter the value of celcius degree : "),
    scanf("%f", &celcius);
    fahrenheit = (celcius*9 / 5) +32;
    printf("%.2f fahrenheit.",fahrenheit);
    return 0;
}