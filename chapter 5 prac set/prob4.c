#include <stdio.h>
// 0,1,1,2,3,5,8,13,21,34,…
// n is number of term.
int fribonacci(int n){
    if (n==1 || n==2)
    {
        return n-1;
    }
    return fribonacci(n-1)+fribonacci(n-2);
     
}
int main()
{
    int n;
    printf("enter the number of terms : ");
    scanf("%d",&n);
    printf("fribonacci series of %d terms : ",n);
    for ( int i = 1; i <= n; i++)
    {
        printf("%d, ",fribonacci(i));
    }
    
    return 0;
}