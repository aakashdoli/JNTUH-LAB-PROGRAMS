
/*
 * 17_number_pyramid.c
 * Simple centered number pyramid.
 */
#include <stdio.h>

int main(void){
    int n;
    printf("Height: ");
    if (scanf("%d",&n)!=1 || n<1){ puts("Invalid n"); return 1; }
    for(int i=1;i<=n;i++){
        for(int s=0;s<n-i;s++) printf(" ");
        for(int k=1;k<=i;k++) printf("%d", k);
        for(int k=i-1;k>=1;k--) printf("%d", k);
        printf("\n");
    }
    return 0;
}
