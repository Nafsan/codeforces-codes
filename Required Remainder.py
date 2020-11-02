t = int(input())
for p in range(t):
    x, y, n = map(int, input().split())
    rem = n % x
    if rem == y:
        print(n)
    elif rem < y:
        pos = n - rem - (x - y)
        if pos < 0:
            pos = n + abs(rem - x)
        print(pos)
    else:
        diff = rem - y
        pos = n - diff
        if pos < 0:
            diff_2 = abs(y - rem)
            pos = n + diff_2 + y
        print(pos)
