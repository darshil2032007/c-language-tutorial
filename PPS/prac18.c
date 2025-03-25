#include <stdio.h>

int main() {
    int number, reversed_number = 0, remainder;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;               // Get the last digit
        reversed_number = reversed_number * 10 + remainder; // Build the reversed number
        number /= 10;                          // Remove the last digit from the number
    }

    // Output the reversed number
    printf("Reversed number is: %d\n", reversed_number);

    return 0;
}
