
/*
 * 18_geometric_progression_sum.c
 * Compute S = 1 + x + x^2 + ... + x^n with basic validation.
 */
#include <stdio.h>
#include <math.h>

int main(void){
    double x; long long n;
    while (1){
        printf("Enter x and n (n>=0). Ctrl+C to quit.\n");
        if (scanf("%lf %lld",&x,&n)!=2){ puts("Invalid"); return 1; }
        if (n<0){ puts("Error: n must be >= 0. Try again."); continue; }
        // No illegal x here; allow all real x.
        double sum = 0.0, term = 1.0;
        for (long long i=0;i<=n;i++){
            sum += term;
            term *= x;
        }
        printf("x=%.6g n=%lld sum=%.6g\n", x, n, sum);
    }
    return 0;
}
