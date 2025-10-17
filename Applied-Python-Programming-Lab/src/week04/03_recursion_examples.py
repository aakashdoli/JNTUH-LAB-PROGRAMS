def power(a, n):
    return 1 if n==0 else a*power(a, n-1)

def reverse(s):
    return s if len(s)<=1 else reverse(s[1:]) + s[0]

if __name__ == "__main__":
    print("power(2,10) =", power(2,10))
    print("reverse('abcd') =", reverse('abcd'))
