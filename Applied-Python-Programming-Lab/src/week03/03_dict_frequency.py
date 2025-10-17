# Word frequency
from collections import Counter
text = input("text: ")
freq = Counter(word.strip(".,!?").lower() for word in text.split())
for w,c in sorted(freq.items()):
    print(f"{w}: {c}")
