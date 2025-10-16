#include <stdio.h>
#include <limits.h>

int main() {
    int num;
    int min = INT_MAX;
    int max = INT_MIN;
    int sum = 0;
    int count = 0;
    int positive_count = 0;
    int negative_count = 0;

    printf("Enter numbers (0 to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0)
            break;

        if (num < min)
            min = num;
        if (num > max)
            max = num;

        sum += num;
        count++;

        if (num > 0)
            positive_count++;
        else if (num < 0)
            negative_count++;
    }

    if (count == 0) {
        printf("No numbers entered.\n");
    } else {
        printf("Minimum: %d\n", min);
        printf("Maximum: %d\n", max);
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", (float)sum / count);
        printf("Positive numbers: %d\n", positive_count);
        printf("Negative numbers: %d\n", negative_count);
    }
    return 0;
}
