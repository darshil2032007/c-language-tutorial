#include <stdio.h>

int main()
{
    int a;
    printf("enter your age : ");
    scanf("%d",&a);
    if(a>60){
        printf("you are old person to drive");
    }
    // when your any condition was approved another will not approved.
    else if(a>18){
        printf("you can drive");
    }
    else {
        printf("you cannot drive");
    }
    return 0;
}