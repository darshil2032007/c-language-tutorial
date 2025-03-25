#include <stdio.h>

int main()
{
    int a;
    printf("enter number: ");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("your number is 1");
        break;
        case 2:
        printf("your number is 2");
        break;
        case 3:
        printf("your number is 3");
        break;
        case 4:
        printf("your number is 4");
        break;
        default:
        printf("your number is invalid ");
    }
    return 0;
}