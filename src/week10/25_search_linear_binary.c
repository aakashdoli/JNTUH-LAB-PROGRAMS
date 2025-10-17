
/*
 * 25_search_linear_binary.c
 * Linear and Binary search with both iterative and recursive versions.
 * Binary search requires sorted array.
 */
#include <stdio.h>

int linear_iter(int a[], int n, int key){
    for (int i=0;i<n;i++) if (a[i]==key) return i;
    return -1;
}
int linear_rec(int a[], int n, int key, int i){
    if (i>=n) return -1;
    if (a[i]==key) return i;
    return linear_rec(a,n,key,i+1);
}
int binary_iter(int a[], int n, int key){
    int lo=0, hi=n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if (a[mid]==key) return mid;
        else if (a[mid]<key) lo=mid+1;
        else hi=mid-1;
    }
    return -1;
}
int binary_rec(int a[], int lo, int hi, int key){
    if (lo>hi) return -1;
    int mid = lo + (hi-lo)/2;
    if (a[mid]==key) return mid;
    else if (a[mid]<key) return binary_rec(a, mid+1, hi, key);
    else return binary_rec(a, lo, mid-1, key);
}

void sort(int a[], int n){ // simple insertion sort for convenience
    for (int i=1;i<n;i++){
        int key=a[i], j=i-1; while(j>=0 && a[j]>key){ a[j+1]=a[j]; j--; } a[j+1]=key;
    }
}

int main(void){
    int n;
    printf("n: "); if (scanf("%d",&n)!=1 || n<1){ puts("Invalid"); return 1; }
    int a[n];
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    int key; printf("Key: "); scanf("%d",&key);

    // Linear
    int li = linear_iter(a,n,key);
    int lr = linear_rec(a,n,key,0);
    printf("Linear (iter) index = %d\n", li);
    printf("Linear (rec ) index = %d\n", lr);

    // Binary (requires sorted array)
    sort(a,n);
    int bi = binary_iter(a,n,key);
    int br = binary_rec(a,0,n-1,key);
    printf("Binary (iter) index = %d (array sorted internally)\n", bi);
    printf("Binary (rec ) index = %d (array sorted internally)\n", br);
    return 0;
}
