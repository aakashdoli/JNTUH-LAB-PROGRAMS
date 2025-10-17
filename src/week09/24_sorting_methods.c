
/*
 * 24_sorting_methods.c
 * Bubble, Selection, Insertion sort on an array of integers (ascending).
 */
#include <stdio.h>

void bubble(int a[], int n){
    for (int i=0;i<n-1;i++)
        for (int j=0;j<n-1-i;j++)
            if (a[j]>a[j+1]){ int t=a[j]; a[j]=a[j+1]; a[j+1]=t; }
}
void selection(int a[], int n){
    for (int i=0;i<n-1;i++){
        int mi=i;
        for (int j=i+1;j<n;j++) if (a[j]<a[mi]) mi=j;
        if (mi!=i){ int t=a[i]; a[i]=a[mi]; a[mi]=t; }
    }
}
void insertion(int a[], int n){
    for (int i=1;i<n;i++){
        int key=a[i], j=i-1;
        while(j>=0 && a[j]>key){ a[j+1]=a[j]; j--; }
        a[j+1]=key;
    }
}
void print(const char* name, int a[], int n){
    printf("%s: ", name);
    for (int i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
}

int main(void){
    int n;
    printf("n: "); if (scanf("%d",&n)!=1 || n<1){ puts("Invalid"); return 1; }
    int a[n], b[n], c[n];
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    for (int i=0;i<n;i++) b[i]=c[i]=a[i];
    bubble(a,n); selection(b,n); insertion(c,n);
    print("Bubble   ", a, n);
    print("Selection", b, n);
    print("Insertion", c, n);
    return 0;
}
