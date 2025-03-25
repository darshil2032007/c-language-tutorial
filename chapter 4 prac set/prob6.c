#include <stdio.h>

int main()
{
    // Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
    int sum = 0;
    for (int i = 1; i < 11; i++)
    {
        sum += i;
    }
    printf("the sum is %d", sum);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int i = 1, sum = 0;
//     do
//     {
//         sum += i;
//         i++;
//     } while (i < 11);
//     printf(" the sum is %d", sum);

//     return 0;
// }