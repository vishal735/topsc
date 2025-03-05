#include <stdio.h>

int main() {
    int number, lastDigit, firstDigit, temp;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Extract last digit
    lastDigit = number % 10; 

    // Store original number for first digit extraction
    temp = number;

    // Find the first digit by repeatedly dividing by 10 until only the first digit remains
    while (temp > 9) {
        temp /= 10;
    }
    firstDigit = temp; 

    // Calculate and print the sum
    printf("Sum of first and last digit: %d\n", firstDigit + lastDigit);

    return 0;
}
