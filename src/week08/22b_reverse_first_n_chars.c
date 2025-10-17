
/*
 * 22b_reverse_first_n_chars.c
 * Reverse the first n characters in a file in-place. Usage: ./prog file n
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    if (argc!=3){ printf("Usage: %s <file> <n>\n", argv[0]); return 1; }
    long n = atol(argv[2]);
    if (n<0){ puts("n must be >= 0"); return 1; }
    FILE* f = fopen(argv[1],"r+b");
    if (!f){ perror("open"); return 1; }
    // compute min(n, filesize)
    if (fseek(f,0,SEEK_END)!=0){ perror("seek"); return 1; }
    long sz = ftell(f);
    if (sz < 0){ perror("ftell"); return 1; }
    if (n > sz) n = sz;
    long i=0, j=n-1;
    while(i<j){
        if (fseek(f,i,SEEK_SET)!=0){ perror("seek"); return 1; }
        int a = fgetc(f);
        if (fseek(f,j,SEEK_SET)!=0){ perror("seek"); return 1; }
        int b = fgetc(f);
        if (a==EOF || b==EOF){ break; }
        if (fseek(f,i,SEEK_SET)!=0){ perror("seek"); return 1; }
        fputc(b,f);
        if (fseek(f,j,SEEK_SET)!=0){ perror("seek"); return 1; }
        fputc(a,f);
        i++; j--;
    }
    fclose(f);
    puts("Reversed first n characters.");
    return 0;
}
