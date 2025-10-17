
/*
 * 13_string_palindrome.c
 * Check if a string is a palindrome (ignore newline, case-sensitive).
 */
#include <stdio.h>
#include <string.h>

int main(void){
    char s[1024];
    printf("Enter string: "); fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")] = 0;
    int i=0, j=(int)strlen(s)-1;
    int ok=1;
    while(i<j){
        if (s[i]!=s[j]) { ok=0; break; }
        i++; j--;
    }
    printf("%s\n", ok? "Palindrome" : "Not a palindrome");
    return 0;
}
