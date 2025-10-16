#include <stdio.h>

int main() {
    double x, y;
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);

    double result = 3 * x * x * y
                    - 2 * x * y * y
                    - 7 * x * x * y
                    - 4 * y * y
                    + 15 * x * y
                    + 2 * x
                    - 3 * x
                    + 10 * y
                    + 6;

    printf("Result: %.2lf\n", result);

    return 0;
}
