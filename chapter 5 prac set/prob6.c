#include <stdio.h>

// Recursive function to calculate the sum of first n natural numbers
int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0; // Base case: the sum of the first 0 numbers is 0
    } else {
        return n + sumOfNaturalNumbers(n - 1); // Recursive case
    }
}

int main() {
    int n;

    // Ask the user for the value of n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum using the recursive function
    

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sumOfNaturalNumbers(n));

    return 0;
}
