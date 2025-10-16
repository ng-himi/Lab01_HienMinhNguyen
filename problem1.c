#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;

    printf("Enter a number (-1 to exit): ");
    while (scanf("%d", &number) == 1) {
        if (number == -1) {
            printf("Program ended.\n");
            break;
        }

        // Special case for 0
        if (number == 0) {
            printf("Output: 0\n");
            printf("Enter a number (-1 to exit): ");
            continue;
        }

        // Handle negative
        int n = abs(number);
        printf("Output: ");
        while (n != 0) {
            printf("%d ", n % 10);
            n = n / 10;
        }
        if (number < 0) {
            printf("negative");
        }
        printf("\n");

        printf("Enter a number (-1 to exit): ");
    }

    // If input is invalid (not an integer)
    if (feof(stdin)) {
        printf("End of input.\n");
    } else {
        printf("Invalid input. Please enter an integer.\n");
    }

    return 0;
}
