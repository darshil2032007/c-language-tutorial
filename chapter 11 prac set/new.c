#include <stdio.h>
float square_area(float len);
float circle_area(float rad);
float rectangle_area(float l, float b);

int main()
{
    int n;
    printf("for square area press 1\nfor circle area press 2\nfor rectangle area press 3\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("you choose 1 \n");
        float len;
        printf("enter length of the square :  \n");
        scanf("%f",&len);
        
        printf("area of the square : %.2f",square_area(len));
        break;
    case 2:
        printf("you choose 2 \n");
        float rad;
        printf("enter radius of the circle :  \n");
        scanf("%f",&rad);
        printf("area of the circle : %.2f",circle_area(rad));
        break;
    case 3:
        printf("you choose 3 \n");
        float l,b;
        printf("enter length and width of the rectangle :  \n");
        scanf("%f%f",&l,&b);
        printf("area of the rectangle : %.2f",rectangle_area(l,b));
        break;
    default:
        printf("follow the instruction!!");
        break;
    }
    return 0;
}
float square_area(float len)
{
    return len * len;
}
float circle_area(float rad)
{
    return 3.14 * rad * rad;
}
float rectangle_area(float l, float b)
{
    return l * b;
}