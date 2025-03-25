#include <stdio.h>

int main(){
    float a,b,c,d;
    printf("enter the number a : ");
    scanf("%f",&a);
    printf("enter the number b : ");
    scanf("%f",&b);
    printf("enter the number c : ");
    scanf("%f",&c);
    printf("enter the number d : ");
    scanf("%f",&d);
    if(a>b && a>c && a>d){
        printf("the greatest number is a %f .",a);
    }
    if(b>a && b>c && b>d){
        printf("the greatest number is b %f .",b);
    }
    if(c>b && c>a && c>d){
        printf("the greatest number is c %f .",c);
    }
    if(d>b && d>c && d>a){
        printf("the greatest number is d %f .",d);
    }

    return 0;
}