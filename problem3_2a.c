#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrimeOptimized(int n) {
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    int limit = (int) sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    printf("Prime numbers less than %d (Optimized):\n", N);
    for (int i = 2; i < N; i++) {
        if (isPrimeOptimized(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
