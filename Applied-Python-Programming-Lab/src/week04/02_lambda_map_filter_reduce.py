from functools import reduce
nums = list(map(int, input("nums: ").split()))
squares = list(map(lambda x:x*x, nums))
evens = list(filter(lambda x:x%2==0, nums))
product = reduce(lambda a,b:a*b, nums, 1)
print("Squares:", squares)
print("Evens  :", evens)
print("Product:", product)
