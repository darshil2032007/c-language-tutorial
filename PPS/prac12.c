#include <stdio.h>

int main()
{
    int marks;
    printf("enter your marks : ");
    scanf("%d",&marks);
    if (marks>=80 && marks<=100){
        printf("you are pass with distinction.");
    }
    if (marks>=60 && marks<=79){
        printf("you are pass with first class.");
    }
    if (marks>=40 && marks<=59){
        printf("you are pass with second class.");
    }
    if (marks<40) {
        printf(" you are fail.");
    }
    return 0;
}