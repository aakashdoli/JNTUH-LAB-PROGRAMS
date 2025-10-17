
/*
 * 23a_display_file.c
 * Display contents of a file. Usage: ./prog <file>
 */
#include <stdio.h>

int main(int argc, char** argv){
    if (argc!=2){ printf("Usage: %s <file>\n", argv[0]); return 1; }
    FILE* f = fopen(argv[1],"rb"); if(!f){ perror("open"); return 1; }
    char buf[4096]; size_t n;
    while((n=fread(buf,1,sizeof(buf),f))>0){
        fwrite(buf,1,n,stdout);
    }
    fclose(f);
    return 0;
}
