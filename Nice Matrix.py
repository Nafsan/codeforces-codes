import math

for _ in range(int(input())):
    n, m = map(int, input().split())
    ara = []
    for i in range(n):
        ara.append(list(map(int, input().strip().split())))
    ans = row_odd = col_odd = total_odd = 0
    if n % 2 == 1:
        row_odd = 1
        total_odd += 1
    if m % 2 == 1:
        col_odd = 1
        total_odd += 1

    for i in range(n):
        for j in range(m):
            if ara[i][j] != ara[i][m-1-j]:
                a = ara[i][j]
                b = ara[i][m-1-j]
                c = ara[n-1-i][j]
                d = ara[n-1-i][m-1-j]
                if total_odd == 2 and i == math.floor(n/2):
                    ans += 0
                elif row_odd == 1 and i == math.floor(n/2):
                    avg = math.trunc((a+b)/2)
                    ara[i][j] = ara[i][m - 1 - j] = avg
                    ans += abs(a-avg) + abs(b-avg)
                elif col_odd == 1 and i == math.floor(n/2):
                    avg = math.trunc((c+d)/2)
                    ara[n - 1 - i][j] = ara[n - 1 - i][m - 1 - j] = avg
                    ans += abs(c-avg) + abs(d-avg)
                else:
                    avg = math.trunc((a+b+c+d)/4)
                    ara[i][j] = ara[i][m-1-j] = ara[n-1-i][j] = ara[n-1-i][m-1-j] = avg
                    ans += abs(a-avg)+abs(b-avg)+abs(c-avg)+abs(d-avg)
    print(ans)
