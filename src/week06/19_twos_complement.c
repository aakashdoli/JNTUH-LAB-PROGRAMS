
/*
 * 19_twos_complement.c
 * Two's complement of a binary string using right-to-left scan method.
 * Example: 11100 -> 00100
 */
#include <stdio.h>
#include <string.h>

int main(void){
    char s[1024];
    printf("Binary string: ");
    if (!fgets(s,sizeof(s),stdin)) return 1;
    s[strcspn(s,"\n")] = 0;
    int n = (int)strlen(s);
    if (n==0){ puts("Empty input"); return 1; }
    // validate
    for (int i=0;i<n;i++) if (s[i]!='0' && s[i]!='1'){ puts("Invalid binary"); return 1; }
    // find rightmost '1'
    int i=n-1;
    while(i>=0 && s[i]!='1') i--;
    if (i<0){
        // no '1' found -> 2's complement of all-zero is all-zero
        printf("%s\n", s);
        return 0;
    }
    // copy to out, complement all bits to the left of i
    char out[1024]; strcpy(out,s);
    for (int j=i-1;j>=0;j--){
        out[j] = (s[j]=='0') ? '1' : '0';
    }
    printf("2's complement: %s\n", out);
    return 0;
}
