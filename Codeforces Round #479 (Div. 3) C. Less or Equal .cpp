n, k = map(int, input().split())
ara = list(map(int, input().strip().split()))
ara.sort()
ans = ara[k - 1]
cnt = 0
if k == 0 and ara[0] != 1:
    print(1)
elif k == 0 and ara[0] == 1:
    print(-1)
elif k == n:
    print(ara[n-1])
else:
    if ara[k-1] == ara[k]:
        print(-1)
    else:
        print(ara[k-1])