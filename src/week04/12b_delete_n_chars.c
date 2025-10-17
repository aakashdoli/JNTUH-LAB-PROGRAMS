
/*
 * 12b_delete_n_chars.c
 * Delete n characters from given position (0-based) in a string.
 */
#include <stdio.h>
#include <string.h>

int main(void){
    char s[1024];
    int pos, n;
    printf("String: "); fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")] = 0;
    printf("Position (0-based): "); if (scanf("%d",&pos)!=1) return 1;
    printf("Count n: "); if (scanf("%d",&n)!=1) return 1;
    int len = (int)strlen(s);
    if (pos<0 || n<0 || pos>len){ puts("Out of range"); return 1; }
    if (pos+n > len) n = len - pos;
    memmove(s+pos, s+pos+n, len-pos-n+1);
    printf("Result: %s\n", s);
    return 0;
}
