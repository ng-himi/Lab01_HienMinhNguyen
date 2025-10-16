#include <stdio.h>

int main() {
    double x, y;
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);

    double x2 = x * x;   // 1 multiplication
    double y2 = y * y;   // 2 multiplications total
    double xy = x * y;   // 3 multiplications total

    double term1 = -4 * x2 * y;  // 2 more multiplications (x2 * y, then * -4)
    double term2 = -6 * y2;      // 1 multiplication
    double term3 = 15 * xy;      // 1 multiplication
    double term4 = -1 * x;       // 1 multiplication
    double term5 = 10 * y;       // 1 multiplication

    double result = term1 + term2 + term3 + term4 + term5 + 6;  // additions and constant

    printf("Optimized Result: %.2lf\n", result);
    return 0;
}
