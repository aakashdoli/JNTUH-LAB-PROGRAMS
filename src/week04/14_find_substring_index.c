
/*
 * 14_find_substring_index.c
 * Return index in S where T begins, or -1 if not found.
 */
#include <stdio.h>
#include <string.h>

int find_index(const char* S, const char* T){
    int n=(int)strlen(S), m=(int)strlen(T);
    if (m==0) return 0;
    for(int i=0;i+m<=n;i++){
        if (strncmp(S+i, T, m)==0) return i;
    }
    return -1;
}

int main(void){
    char S[1024], T[512];
    printf("S: "); fgets(S,sizeof(S),stdin);
    printf("T: "); fgets(T,sizeof(T),stdin);
    S[strcspn(S,"\n")] = 0; T[strcspn(T,"\n")] = 0;
    printf("Index = %d\n", find_index(S,T));
    return 0;
}
