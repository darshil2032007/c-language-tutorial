#include <stdio.h>

int main(){
    char i = 'A';
    char* j = &i; // j is a pointer pointing to i (j is a character pointer) 

    float k = 5.232;
    float* l = &k;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of k is %p\n", &k);
    printf("The address of k is %p\n", l);


    printf("The value at address j is %d\n", *(&i));
    printf("the value at address l is %.3f\n", *(&k));

    return 0;
}