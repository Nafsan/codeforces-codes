n = int(input())
ara = list(map(int, input().strip().split()))
ara.sort()
j = 0
cnt = 0
k = 1
for i in range(n):
    if ara[i] >= k:
        cnt += 1
        k += 1
print(cnt)
