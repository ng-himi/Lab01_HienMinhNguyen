#include <stdio.h>
#include <limits.h>  // For INT_MAX, INT_MIN

int main() {
    int num;
    int min = INT_MAX;  // Initialize to max int value
    int max = INT_MIN;  // Initialize to min int value

    printf("Enter numbers (0 to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0)  // Input 0 stops the program
            break;
        if (num < min)
            min = num;
        if (num > max)
            max = num;
    }

    if (min == INT_MAX || max == INT_MIN) {
        printf("No numbers entered.\n");
    } else {
        printf("Minimum: %d\n", min);
        printf("Maximum: %d\n", max);
    }
    return 0;
}
