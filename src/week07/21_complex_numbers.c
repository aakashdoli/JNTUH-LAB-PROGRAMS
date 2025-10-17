
/*
 * 21_complex_numbers.c
 * i) Read complex  ii) Write complex  iii) Add  iv) Multiply
 */
#include <stdio.h>

typedef struct { double r, i; } Complex;

Complex read_complex(const char* name){
    Complex z; 
    printf("Enter %s (real imag): ", name);
    scanf("%lf %lf", &z.r, &z.i);
    return z;
}
void print_complex(const char* label, Complex z){
    printf("%s = %.6f %c %.6fi\n", label, z.r, (z.i<0?'-':'+'), (z.i<0?-z.i:z.i));
}
Complex add(Complex a, Complex b){ return (Complex){a.r+b.r, a.i+b.i}; }
Complex mul(Complex a, Complex b){ return (Complex){a.r*b.r - a.i*b.i, a.r*b.i + a.i*b.r}; }

int main(void){
    Complex a = read_complex("A");
    Complex b = read_complex("B");
    print_complex("A", a);
    print_complex("B", b);
    print_complex("A+B", add(a,b));
    print_complex("A*B", mul(a,b));
    return 0;
}
