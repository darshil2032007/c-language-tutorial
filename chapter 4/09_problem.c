#include <stdio.h>

int main()
{
    int n,i;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=n;i>n;i--){
        printf("%d",i);
    }
    return 0;
}