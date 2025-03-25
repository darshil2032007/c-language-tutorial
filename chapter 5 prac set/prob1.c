#include <stdio.h>
int avg(int x, int y, int z){

return (x+y+z)/3;}
int main()
{
    int x,y,z;
    printf("enter any 3 numbers : ");
    scanf("%d%d%d",&x,&y,&z);
    avg(x,y,z);
    printf("avg of given 3 numbers :%d",avg(x,y,z));
    return 0;
}