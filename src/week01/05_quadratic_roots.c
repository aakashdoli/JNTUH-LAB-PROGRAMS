
/*
 * 05_quadratic_roots.c
 * Roots of ax^2 + bx + c = 0
 * Handles real & complex roots.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double a,b,c;
    printf("Enter a b c: ");
    if (scanf("%lf %lf %lf",&a,&b,&c)!=3 || a==0) {
        puts("Invalid input (a must be non-zero)."); return 1;
    }
    double D = b*b - 4*a*c;
    if (D > 0) {
        double r1 = (-b + sqrt(D))/(2*a);
        double r2 = (-b - sqrt(D))/(2*a);
        printf("Real and distinct roots: %.6f, %.6f\n", r1, r2);
    } else if (D == 0) {
        double r = -b/(2*a);
        printf("Real and equal roots: %.6f\n", r);
    } else {
        double real = -b/(2*a);
        double imag = sqrt(-D)/(2*a);
        printf("Complex roots: %.6f + %.6fi , %.6f - %.6fi\n",
               real, imag, real, imag);
    }
    return 0;
}
