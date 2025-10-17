
/*
 * 10_min_max_in_list.c
 * Find smallest and largest in a list of integers.
 */
#include <stdio.h>
#include <limits.h>

int main(void){
    int n;
    printf("How many numbers? ");
    if (scanf("%d",&n)!=1 || n<1){ puts("Invalid n"); return 1; }
    long long x, mn=LLONG_MAX, mx=LLONG_MIN;
    for (int i=0;i<n;i++){
        scanf("%lld",&x);
        if (x<mn) mn=x;
        if (x>mx) mx=x;
    }
    printf("min=%lld max=%lld\n", mn, mx);
    return 0;
}
