t = int(input())
for p in range(t):
    n = int(input())
    ara = list(map(int, input().strip().split()))
    total = 0
    minn = 0
    ans = list()
    for i in range(n):
        total += ara[i]
        if total < minn:
            minn = total
    print(abs(minn))
