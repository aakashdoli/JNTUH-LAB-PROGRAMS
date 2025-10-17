
/*
 * 06_factorial.c
 * Compute n! for non-negative n (iterative).
 */
#include <stdio.h>

int main(void){
    int n;
    printf("Enter n (0..20 recommended): ");
    if (scanf("%d",&n)!=1 || n<0) { puts("Invalid n"); return 1; }
    unsigned long long f=1;
    for (int i=2;i<=n;i++) f*=i;
    printf("%d! = %llu\n", n, f);
    return 0;
}
