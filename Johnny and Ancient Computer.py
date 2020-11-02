import math
from math import log2

t = int(input())
for j in range(t):
    ans = 0
    a, b = map(int, input().split())
    if a < b:
        a, b = b, a
    while b < a:
        ans += 1
        b *= 2
    if a == b:
        print(math.ceil(ans / 3))
    else:
        print(-1)
