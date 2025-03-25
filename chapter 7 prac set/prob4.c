#include <stdio.h>
/*Repeat problem 3 for a general input provided by the user using scanf. */
int main()
{
    int n;
    int array[10];
    printf("enter the number : ");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        array[i]=(i+1)*n;
    }
    printf("array[10] = {");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ",array[i]);
    }
    printf("}");
    return 0;
}