t = int(input())
for p in range(t):
    n, m = map(int, input().strip().split())
    diff = abs(n - m)
    ans = diff * 4 + 19 + n * 4
    print("Case " + str(p + 1) + ": " + str(ans))
