#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Output: ");
    // If the input number is 0, print 0
    if (number == 0) {
        printf("0");
    }
    // Continue while number is not 0
    while (number != 0) {
        int digit = number % 10;        // Get last digit
        printf("%d ", digit);           // Print last digit
        number = number / 10;           // Remove last digit
    }
    printf("\n");
    return 0;
}
