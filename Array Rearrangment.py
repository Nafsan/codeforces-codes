t = int(input())
for p in range(t):
    n, x = map(int, input().split())
    a = list(map(int, input().strip().split()))
    b = list(map(int, input().strip().split()))
    flag = 0
    a.sort()
    b.sort()
    b.reverse()
    ans = ""
    for i in range(n):
        if a[i] + b[i] > x:
            ans = "NO"
            break
        else:
            ans = "YES"
    print(ans)
    if p < t-1:
        space = input()