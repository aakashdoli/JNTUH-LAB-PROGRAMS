
/*
 * 12a_insert_substring.c
 * Insert a substring into a main string at a given position (0-based).
 * Assumes buffers large enough.
 */
#include <stdio.h>
#include <string.h>

int main(void){
    char s[1024], sub[512];
    int pos;
    printf("Main string: "); fgets(s,sizeof(s),stdin);
    printf("Substring  : "); fgets(sub,sizeof(sub),stdin);
    // strip newlines
    s[strcspn(s,"\n")] = 0;
    sub[strcspn(sub,"\n")] = 0;
    printf("Position (0-based): ");
    if (scanf("%d",&pos)!=1){ puts("Invalid"); return 1; }
    int n = (int)strlen(s), m=(int)strlen(sub);
    if (pos<0 || pos>n){ puts("Position out of range"); return 1; }
    char out[2048];
    memcpy(out, s, pos);
    memcpy(out+pos, sub, m);
    memcpy(out+pos+m, s+pos, n-pos+1);
    printf("Result: %s\n", out);
    return 0;
}
