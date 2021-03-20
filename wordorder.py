
#similar to company logo question...xD
from collections import Counter, OrderedDict
class Ordered_Counter(Counter, OrderedDict):
    pass
geek = Ordered_Counter(input() for _ in range(int(input())))
print(len(geek))
print(*geek.values())
