#include <stdio.h>
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return factorial(n-1)*n;
    }
}
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,factorial(n));
    return 0;
}