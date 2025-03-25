#include <stdio.h>
void change_x_10(int * a){
    *a = *a * 10;
}
int main()
{
    /*Write a program to change the value of a variable to ten times of its current 
    value.*/
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    change_x_10(&a);
    printf("the number is change by 10 times %d given by you.\n",a);
    
    return 0;
}