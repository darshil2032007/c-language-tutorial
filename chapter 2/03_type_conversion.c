#include <stdio.h>

int main()
{
    int a = 9;
    int b = 2;
    float c = a/b;
    printf("the value of a/b is %f\n", c);
    // int and int -> int
    // int and float -> float
    // float and float -> float
    int d = 3.7;
    printf("%d",d);
    // when you type float number in integer data type float is demoted in integer.
    /*operators       priority
         * / %           1
         +-              2
         =               3*/ 
    
    return 0;
}