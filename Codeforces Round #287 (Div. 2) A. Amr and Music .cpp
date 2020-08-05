n, k = map(int, input().split())
ara = list(map(int, input().strip().split()))

for i in range(n):
    ara[i] = (ara[i], i + 1)
ara = sorted(ara)
# print(ara)
ans = []
j = 0
total = 0
for i in range(n):
    if total + ara[i][0] > k:
        break
    total += ara[i][0]
    ans.append(ara[i][1])
ans = sorted(ans)
print(len(ans))
for i in ans:
    print(i, end=" ")