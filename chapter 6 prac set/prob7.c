/*Try problem 3 using call by value and verify that it does not change the value of 
the said variable.*/
#include <stdio.h>
void change_x_10(int a){
    a = a * 10;
}
int main()
{
    int a;
    int * b=&a;
    printf("enter the number : ");
    scanf("%d",&a);
    change_x_10(a);
    printf("the number is not change %d\n",*b);
    
    return 0;
}