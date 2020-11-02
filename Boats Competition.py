t = int(input())
for p in range(t):
    n = int(input())
    ara = list(map(int, input().strip().split()))
    weight = [0]*50
    basic = 0
    for i in range(n):
        for j in range(n):
            if i == j:
                continue
            basic = ara[i] + ara[j]
            for k in range(n):
