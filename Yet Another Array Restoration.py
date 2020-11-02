from math import gcd

t = int(input())
for p in range(t):
    n, x, y = map(int, input().split())
    diff = y-x
    val = gcd(diff, n)
    if diff <=val:
        ans = x
        for i in range(n):
            print(ans, end=" ")
