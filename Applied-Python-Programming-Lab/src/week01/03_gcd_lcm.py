# Euclid's algorithm for GCD and LCM
def gcd(a, b):
    while b: a, b = b, a % b
    return abs(a)

def lcm(a, b):
    g = gcd(a,b)
    return abs(a*b)//g if g else 0

if __name__ == "__main__":
    a = int(input("a: ")); b = int(input("b: "))
    print("GCD:", gcd(a,b))
    print("LCM:", lcm(a,b))
