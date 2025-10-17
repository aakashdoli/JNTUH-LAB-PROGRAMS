try:
    n = int(input("Enter integer: "))
    print("100/n =", 100/n)
except ValueError:
    print("Not an integer!")
except ZeroDivisionError:
    print("Division by zero!")
finally:
    print("Done.")
