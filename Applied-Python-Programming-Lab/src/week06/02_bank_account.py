class InsufficientFunds(Exception): pass
class Account:
    def __init__(self, owner, balance=0.0):
        self.owner = owner
        self.balance = float(balance)
    def deposit(self, amt): self.balance += amt; return self.balance
    def withdraw(self, amt):
        if amt>self.balance: raise InsufficientFunds("Not enough balance")
        self.balance -= amt; return self.balance
    def __repr__(self): return f"Account({self.owner!r}, balance={self.balance:.2f})"

if __name__ == "__main__":
    a = Account("Aakash", 1000)
    a.deposit(250)
    try:
        a.withdraw(1500)
    except InsufficientFunds as e:
        print("Error:", e)
    print(a)
