#include <stdio.h>
/*Read five persons height and weight and count the number of person having 
height greater than 170 and weight less than 50, */
int main()
{
    float height[5];
    float weight[5];
    int no_person=5;
    int count=0;
    for (int i = 0; i < no_person; i++)
    {
        printf("enter the %d person's height (in CMs): ",i+1);
        scanf("%f",&height[i]);
        printf(" \n");
    }
    for (int i = 0; i < no_person; i++)
    {
        printf("enter the %d person's weight (in KGs) : ",i+1);
        scanf("%f",&weight[i]);
        printf(" \n");
    }
    for (int i = 0; i < no_person; i++)
    {
        if (weight[i]< 50 && height[i]>170)
        {
            count += 1; 
        }
        
    }
    printf("the number of person having height greater than 170 and weight less than 50 is %d\n",count);
    return 0;
}