#include <stdio.h>
#include <stdbool.h>
#include <string.h>  // For memset

void sieveOfEratosthenes(int N) {
    bool prime[N+1];
    memset(prime, true, sizeof(prime));
    
    prime[0] = false;
    prime[1] = false;

    for (int p = 2; p*p <= N; p++) {
        if (prime[p] == true) {
            for (int i = p*p; i <= N; i += p) {
                prime[i] = false;
            }
        }
    }

    printf("Prime numbers less than or equal to %d:\n", N);
    for (int i = 2; i <= N; i++) {
        if (prime[i])
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    sieveOfEratosthenes(N);
    return 0;
}
