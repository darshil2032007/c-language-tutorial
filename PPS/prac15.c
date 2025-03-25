// #include <stdio.h>

// int main()
// {
//     int numbers[10];
//     for (int i = 0; i < 10; i++)
//     {
//         printf("enter the %d number : ",(i+1));
//         scanf("%d",&numbers[i]);
//     }
//     int max=numbers[0];
//     int min=numbers[0];
//     for (int i = 0; i < 10; i++)
//     {
//         if (numbers[i]>max)
//         {
//             max = numbers[i];
//         }
//         if(numbers[i]< min){
//             min = numbers[i];
//         }
//     }
//     printf("max = %d \n",max);
//     printf("min = %d \n",min);
//     return 0;
// }
#include <stdio.h>

int main()
{
    int arr[10],max,min;
    printf("enter 10 numbers : \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }  
    }
    printf("max = %d \n",max);
    printf("min = %d \n",min);
    return 0;
}