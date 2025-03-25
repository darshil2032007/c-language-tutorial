#include <stdio.h>

int main()
{
    int v, a, t, d;
    printf("Enter the value of velocity (in m/s) : ");
    scanf("%d", &v);
    printf("Enter the value of acceleration (in m/s^2) : ");
    scanf("%d", &a);
    printf("Enter the value of time (in second): ");
    scanf("%d", &t);
    d = v * t + .5 * a * t * t;
    printf("Distance travelled = %d meter.", d);

    return 0;
}