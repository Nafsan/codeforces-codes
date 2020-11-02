t = int(input())
for i in range(t):
    x, y = map(int, input().split())
    a, b = map(int, input().split())
    ans = 0
    diff = abs(x-y)
    if b > 2*a:
        ans += x*a+y*a
    else:
        ans += diff*a + min(x, y)*b

    print(ans)
