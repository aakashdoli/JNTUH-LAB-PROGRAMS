
/*
 * 20_roman_to_decimal.c
 * Convert Roman numeral (upper-case) to decimal; supports standard subtractive pairs.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int val(char c){
    switch(c){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return -1;
    }
}

int main(void){
    char s[256];
    printf("Roman numeral: ");
    if (!fgets(s,sizeof(s),stdin)) return 1;
    s[strcspn(s,"\n")] = 0;
    for (int i=0;s[i];i++){ s[i] = (char)toupper((unsigned char)s[i]); }
    int n = (int)strlen(s);
    int sum=0;
    for (int i=0;i<n;i++){
        int curr = val(s[i]);
        if (curr < 0){ puts("Invalid roman"); return 1; }
        int next = (i+1<n) ? val(s[i+1]) : 0;
        if (next>curr){ sum += (next - curr); i++; }
        else sum += curr;
    }
    printf("Decimal = %d\n", sum);
    return 0;
}
