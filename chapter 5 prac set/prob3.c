#include <stdio.h>
float force(float mass){
    return mass*9.8;
}
int main()
{
    float mass;
    printf("enter the mass : ");
    scanf("%f",&mass);
    printf("the force is : %.2f newton.",force(mass));
    return 0;
}