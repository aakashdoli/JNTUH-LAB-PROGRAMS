
/*
 * 04_primes_upto_n.c
 * Print all prime numbers between 1 and n (inclusive).
 * Simple trial-division up to sqrt(i) for clarity.
 */
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

static bool is_prime(int x) {
    if (x < 2) return false;
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0) return false;
    for (int d = 3; d * (long long)d <= x; d += 2) {
        if (x % d == 0) return false;
    }
    return true;
}

int main(void) {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n)!=1 || n < 1) { puts("Invalid n"); return 1; }
    printf("Primes up to %d:\n", n);
    for (int i = 2; i <= n; i++) if (is_prime(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
