/*Use the array in problem 1 to store 6 integers entered by the user. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit if memory allocation fails
    }

    for (int i = 0; i < n; i++) {
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("The %d number is: %d\n", i + 1, ptr[i]);
    }

    free(ptr); // Free allocated memory
    return 0;
}
