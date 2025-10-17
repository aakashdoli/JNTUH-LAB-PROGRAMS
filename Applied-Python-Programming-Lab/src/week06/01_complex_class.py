class Complex:
    def __init__(self, r:float, i:float):
        self.r,self.i = r,i
    def __add__(self, other): return Complex(self.r+other.r, self.i+other.i)
    def __mul__(self, other): return Complex(self.r*other.r - self.i*other.i, self.r*other.i + self.i*other.r)
    def __repr__(self): 
        sign = '+' if self.i>=0 else '-'
        return f"{self.r} {sign} {abs(self.i)}i"

if __name__ == "__main__":
    a = Complex(2,3); b = Complex(1,-4)
    print("A:", a); print("B:", b)
    print("A+B:", a+b); print("A*B:", a*b)
