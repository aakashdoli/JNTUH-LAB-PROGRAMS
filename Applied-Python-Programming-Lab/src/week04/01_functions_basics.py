def factorial(n:int)->int:
    if n<0: raise ValueError("n>=0")
    res=1
    for i in range(2,n+1): res*=i
    return res

def combinations(n,r):
    from math import comb
    return comb(n,r)

if __name__=="__main__":
    print("5! =", factorial(5))
    print("C(5,2) =", combinations(5,2))
