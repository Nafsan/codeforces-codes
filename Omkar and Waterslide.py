t = int(input())
for p in range(t):
    n = int(input())
    ara = list(map(int, input().strip().split()))
    ans = 0
    for i in range(n-1):
        ans += max(0, ara[i] - ara[i+1])
    print(ans)

