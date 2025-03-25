/*Create an array dynamically capable of storing 5 integers. Now use realloc so
that it can now store 10 integers. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Initialize and print first value as requested
    ptr[0] = 1;
    printf("First element: %d\n", ptr[0]);

    // Reallocate memory to store 10 integers
    int *temp = (int *)realloc(ptr, 10 * sizeof(int));
    if (temp == NULL) {
        printf("Memory reallocation failed.\n");
        free(ptr); // Free the original memory if realloc fails
        return 1;
    }

    // Assign the reallocated memory to ptr if successful
    ptr = temp;

    // Use the reallocated array (optional initialization)
    for (int i = 5; i < 10; i++) {
        ptr[i] = i + 1; // Just an example initialization
    }

    // Print all 10 elements to verify
    for (int i = 0; i < 10; i++) {
        printf("Element %d: %d\n", i, ptr[i]);
    }

    // Free the allocated memory
    free(ptr);

    return 0;
}
