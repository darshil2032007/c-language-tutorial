#include <stdio.h>
int sum_avg(int x , int y){
    return x + y;
}
int main()
{
    int a,b;
    printf("enter the two numbers : ");
    scanf("%d%d",&a,&b);
    sum_avg(a,b);
    printf("the sum of given numbers is %d and avr=erage is %.2f",sum_avg(a,b),sum_avg(a,b)/2.0);
    return 0;
}