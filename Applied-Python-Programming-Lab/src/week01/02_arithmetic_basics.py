# Basic arithmetic with formatted output
a = int(input("a: "))
b = int(input("b: "))
print(f"a+b={a+b}, a-b={a-b}, a*b={a*b}")
print("a/b=", (a/b if b!=0 else "undefined (division by zero)"))
print("a//b=", (a//b if b!=0 else "undefined"))
print("a% b=", (a%b if b!=0 else "undefined"))
print("a**b=", a**b if b>=0 else "fraction (negative power)")
