import math

t = int(input())
for j in range(t):
    n = int(input())
    ara = list(map(int, input().strip().split()))
    ara.reverse()
    print(*ara, sep=" ")
