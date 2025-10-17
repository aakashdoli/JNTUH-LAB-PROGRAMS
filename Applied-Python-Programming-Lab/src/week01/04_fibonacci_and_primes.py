# Generate first n Fibonacci numbers and primes up to n
from math import isqrt

def fib(n):
    a,b = 0,1
    for _ in range(n):
        yield a
        a,b = b, a+b

def is_prime(x:int)->bool:
    if x<2: return False
    if x%2==0: return x==2
    d=3
    while d*d<=x:
        if x%d==0: return False
        d+=2
    return True

if __name__ == "__main__":
    n = int(input("n: "))
    print("Fibonacci:", list(fib(n)))
    print("Primes   :", [i for i in range(2,n+1) if is_prime(i)])
