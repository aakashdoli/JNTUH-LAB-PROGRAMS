# Check if two strings are anagrams (case-insensitive, ignore spaces)
from collections import Counter
a = input("a: ").replace(" ","").lower()
b = input("b: ").replace(" ","").lower()
print("Anagram" if Counter(a)==Counter(b) else "Not anagram")
