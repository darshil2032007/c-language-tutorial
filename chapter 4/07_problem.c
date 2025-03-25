#include <stdio.h>

int main()
{
    int n,i=1;
    printf("value of n : ");
    scanf("%d",&n);
    do
    {
        printf("the value of i is %d\n",i++);
    } while (i<=n);
    
    return 0;
}