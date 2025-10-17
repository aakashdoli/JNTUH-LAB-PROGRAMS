
/*
 * 09_simple_calculator_switch.c
 * Basic +,-,*,/,%% on two integers using switch.
 */
#include <stdio.h>

int main(void){
    long long a,b; char op;
    printf("Enter: <int> <op> <int> (op in + - * / %%): ");
    if (scanf("%lld %c %lld",&a,&op,&b)!=3){ puts("Invalid"); return 1; }
    switch(op){
        case '+': printf("%lld\n", a+b); break;
        case '-': printf("%lld\n", a-b); break;
        case '*': printf("%lld\n", a*b); break;
        case '/': if (b==0) puts("Error: div by zero"); else printf("%lld\n", a/b); break;
        case '%': if (b==0) puts("Error: mod by zero"); else printf("%lld\n", a%b); break;
        default: puts("Unknown operator");
    }
    return 0;
}
