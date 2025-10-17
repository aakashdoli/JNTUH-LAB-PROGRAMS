
/*
 * 01_sum_of_digits.c
 * Sum of digits of a positive integer.
 * Approach: Repeatedly extract last digit (n % 10), add to sum, divide by 10.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long n;
    printf("Enter a positive integer: ");
    if (scanf("%lld", &n)!=1 || n < 0) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    long long sum = 0;
    long long x = n;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    printf("Sum of digits of %lld = %lld\n", n, sum);
    return 0;
}
