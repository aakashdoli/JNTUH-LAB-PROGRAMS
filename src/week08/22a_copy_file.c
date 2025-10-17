
/*
 * 22a_copy_file.c
 * Copy file1 to file2. Usage: ./prog src dest
 */
#include <stdio.h>

int main(int argc, char** argv){
    if (argc!=3){ printf("Usage: %s <src> <dest>\n", argv[0]); return 1; }
    FILE *in=fopen(argv[1],"rb");
    if(!in){ perror("open src"); return 1; }
    FILE *out=fopen(argv[2],"wb");
    if(!out){ perror("open dest"); fclose(in); return 1; }
    char buf[4096]; size_t n;
    while((n=fread(buf,1,sizeof(buf),in))>0){
        if (fwrite(buf,1,n,out)!=n){ perror("write"); return 1; }
    }
    fclose(in); fclose(out);
    puts("Copied.");
    return 0;
}
