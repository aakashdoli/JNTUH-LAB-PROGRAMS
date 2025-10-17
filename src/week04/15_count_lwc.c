
/*
 * 15_count_lwc.c
 * Count lines, words, characters from stdin (like a simple 'wc').
 * Word definition: sequences separated by whitespace.
 */
#include <stdio.h>
#include <ctype.h>

int main(void){
    int c, inword=0;
    long long lines=0, words=0, chars=0;
    printf("Enter text, press Ctrl+D (Linux/Mac) or Ctrl+Z (Win) to end:\n");
    while((c=getchar())!=EOF){
        chars++;
        if (c=='\n') lines++;
        if (isspace(c)) inword=0;
        else if (!inword){ inword=1; words++; }
    }
    printf("Lines: %lld  Words: %lld  Chars: %lld\n", lines, words, chars);
    return 0;
}
