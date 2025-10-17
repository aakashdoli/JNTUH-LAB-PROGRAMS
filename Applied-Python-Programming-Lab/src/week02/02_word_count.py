# Count lines, words, chars from stdin
import sys
text = sys.stdin.read()
lines = text.count('\n')
words = len(text.split())
chars = len(text)
print(f"Lines={lines} Words={words} Chars={chars}")
