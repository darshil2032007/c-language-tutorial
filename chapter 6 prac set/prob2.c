#include <stdio.h>
void returning_var(int* ptr){
    printf("the value of ptr is %p \n",ptr);
    printf("the value at ptr is %d \n",*ptr);
}
int main()
{
    /*Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
    a function and print its address. Are these addresses same? Why?*/
    int i=20;
    int*ptr=&i;
    printf("the address of i is %p\n",&i);
    returning_var(ptr);
    return 0;
}