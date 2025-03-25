#include <stdio.h>
/*Write a function and pass the value by reference.*/
void function(int * value ){
    *value = *value * 2;
}
int main()
{
    int v1;
    printf("enter the number : ");
    scanf("%d",&v1);
    function(&v1);
    printf("double value of number given by you : %d",v1);
    return 0;
}