#include <stdio.h>
int fribonacci(int n){
    if (n==1 || n==2)
    {
        return n-1;
    }
    else{
        return fribonacci(n-1)+ fribonacci(n-2);
    }
}
int main()
{
    int n;
    printf("enter the terms of fribonacci : ");
    scanf("%d",&n);
    printf("fribonacci : ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",fribonacci(i));
    }
    
    return 0;
}
