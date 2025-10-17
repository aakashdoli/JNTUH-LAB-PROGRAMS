
/*
 * 11_matrix_add_mul.c
 * i) Addition of two matrices
 * ii) Multiplication of two matrices
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int r1,c1,r2,c2;
    printf("Enter rows cols of A: ");
    if (scanf("%d %d",&r1,&c1)!=2) return 1;
    printf("Enter rows cols of B: ");
    if (scanf("%d %d",&r2,&c2)!=2) return 1;

    int A[r1][c1], B[r2][c2];
    printf("Enter A (%d x %d):\n", r1,c1);
    for(int i=0;i<r1;i++) for(int j=0;j<c1;j++) scanf("%d",&A[i][j]);
    printf("Enter B (%d x %d):\n", r2,c2);
    for(int i=0;i<r2;i++) for(int j=0;j<c2;j++) scanf("%d",&B[i][j]);

    if (r1==r2 && c1==c2){
        printf("A + B:\n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++) printf("%d ", A[i][j]+B[i][j]);
            printf("\n");
        }
    } else {
        printf("Addition not possible (dimension mismatch)\n");
    }

    if (c1==r2){
        printf("A x B:\n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                long long sum=0;
                for(int k=0;k<c1;k++) sum += A[i][k]*B[k][j];
                printf("%lld ", sum);
            }
            printf("\n");
        }
    } else {
        printf("Multiplication not possible (c1 != r2)\n");
    }
    return 0;
}
