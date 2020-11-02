t = int(input())
for p in range(t):
    n = int(input())
    a = list(map(int, input().strip().split()))
    b = list(map(int, input().strip().split()))
    a_min = min(a)
    b_min = min(b)
    ans = 0
    for i in range(n):
        diff = min((a[i] - a_min), (b[i]-b_min))
        ans += diff
        a[i] -= diff
        b[i] -= diff
        ans += a[i]-a_min + b[i] - b_min

    print(ans)

