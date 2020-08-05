cnt = 0
n, m = map(int, raw_input().split())
for i in range(n):
    a = list(map(int, raw_input().split()))
    for j in range(m*2):
        if j % 2 == 0:
            if a[j]+a[j+1] != 0:
                cnt += 1
print(cnt)