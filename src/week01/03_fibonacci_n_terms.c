
/*
 * 03_fibonacci_n_terms.c
 * Generate first n terms of Fibonacci sequence: 0, 1, 1, 2, 3, ...
 * Iterative approach; handles n=0/1 edge cases.
 */
#include <stdio.h>

int main(void) {
    int n;
    printf("How many terms? ");
    if (scanf("%d", &n)!=1 || n < 0) { puts("Invalid n"); return 1; }
    long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        printf("%lld%s", (i==0?0:a), (i==n-1) ? "\n" : " ");
        long long next = a + b;
        a = b;
        b = next;
    }
    return 0;
}
