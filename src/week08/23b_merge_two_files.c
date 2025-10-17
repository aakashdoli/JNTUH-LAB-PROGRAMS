
/*
 * 23b_merge_two_files.c
 * Merge file1 and file2 into file3 (file1 contents followed by file2).
 * Usage: ./prog file1 file2 file3
 */
#include <stdio.h>
#include <stdlib.h>

int cat(FILE* in, FILE* out){
    char buf[4096]; size_t n;
    while((n=fread(buf,1,sizeof(buf),in))>0){
        if (fwrite(buf,1,n,out)!=n) return -1;
    }
    return 0;
}

int main(int argc, char** argv){
    if (argc!=4){ printf("Usage: %s file1 file2 out\n", argv[0]); return 1; }
    FILE *a=fopen(argv[1],"rb"); if(!a){ perror("file1"); return 1; }
    FILE *b=fopen(argv[2],"rb"); if(!b){ perror("file2"); fclose(a); return 1; }
    FILE *o=fopen(argv[3],"wb"); if(!o){ perror("out"); fclose(a); fclose(b); return 1; }
    if (cat(a,o)<0 || cat(b,o)<0){ perror("write"); return 1; }
    fclose(a); fclose(b); fclose(o);
    puts("Merged.");
    return 0;
}
