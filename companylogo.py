#wanna make your company logo??
from collections import Counter

chars = Counter(input()).items()

for char, n in sorted(chars, key=lambda c: (-c[1], c[0]))[:3]:
    print(char, n)
