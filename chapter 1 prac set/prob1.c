#include <stdio.h>

int main ()
{
    int L ,W ;
    printf("enter the value of L : ");
    scanf("%d",&L);

    printf("enter the value of w : ");
    scanf("%d",&W);
    
    int area = L*W;
    printf("the area of rectangle is %d meter square.",area);

    return 0;
}