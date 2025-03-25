#include <stdio.h>

int main()
{
    char c;
    printf("enter any character : ");
    scanf("%c",&c);
    if(c>='a' && c<='z'){
        printf("the character was entered by you is lowercase.");
    }
    else{
        printf("the character was entered by you is not lowercase.");
    }
    return 0;
}