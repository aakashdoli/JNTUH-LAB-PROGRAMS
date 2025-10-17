
/*
 * 08_towers_of_hanoi.c
 * Recursive solution: move n disks from A to C using B.
 */
#include <stdio.h>

void hanoi(int n, char from, char aux, char to){
    if (n==0) return;
    hanoi(n-1, from, to, aux);
    printf("Move disk %d: %c -> %c\n", n, from, to);
    hanoi(n-1, aux, from, to);
}

int main(void){
    int n;
    printf("Number of disks: ");
    if (scanf("%d",&n)!=1 || n<1){ puts("Invalid n"); return 1; }
    hanoi(n,'A','B','C');
    return 0;
}
