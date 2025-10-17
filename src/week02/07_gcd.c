
/*
 * 07_gcd.c
 * Euclidean Algorithm for GCD of two integers.
 */
#include <stdio.h>
#include <stdlib.h>

long long llabsll(long long x){ return x<0?-x:x; }

int main(void){
    long long a,b;
    printf("Enter two integers: ");
    if (scanf("%lld %lld",&a,&b)!=2){ puts("Invalid"); return 1; }
    a = llabsll(a); b = llabsll(b);
    while (b!=0){ long long t=a%b; a=b; b=t; }
    printf("GCD = %lld\n", a);
    return 0;
}
