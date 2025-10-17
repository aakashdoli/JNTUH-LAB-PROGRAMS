
/*
 * 16_pascals_triangle.c
 * Print Pascal's triangle up to n rows using nCk iterative formula.
 */
#include <stdio.h>

int main(void){
    int n;
    printf("Rows (n): ");
    if (scanf("%d",&n)!=1 || n<1){ puts("Invalid n"); return 1; }
    for (int i=0;i<n;i++){
        long long val = 1;
        for (int s=0;s<n-i-1;s++) printf(" ");
        for (int k=0;k<=i;k++){
            if (k>0) val = val * (i - k + 1) / k;
            printf("%lld ", val);
        }
        printf("\n");
    }
    return 0;
}
