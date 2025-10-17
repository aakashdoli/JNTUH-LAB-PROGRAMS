# Basic list operations and comprehensions
nums = list(map(int, input("Enter integers space-separated: ").split()))
print("Sorted:", sorted(nums))
print("Unique:", sorted(set(nums)))
print("Squares:", [x*x for x in nums])
print("Evens  :", [x for x in nums if x%2==0])
