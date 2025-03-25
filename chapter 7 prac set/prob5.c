#include <stdio.h>
void printarray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void reverse(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main()
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    printarray(array , 6);
    reverse(array ,6);
    printarray(array , 6);
    return 0;
}