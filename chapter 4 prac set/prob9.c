#include <stdio.h>

int main()
{
    int n, factorial=1,i;
    printf("enter the number : ");
    scanf("%d", &n);
    i=n;
    while(i>=1){
        
        factorial *= i;
        i--;
    }
    printf("factorial = %d",factorial);
    return 0;
}