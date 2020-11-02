t = int(input())
for p in range(t):
    n = int(input())
    ara = list(map(int, input().strip().split()))
    odd = even = 0
    for i in range(n):
        if i % 2 == 0:
            