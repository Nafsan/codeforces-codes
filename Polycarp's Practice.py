n, k = map(int, input().split())
ara = list(map(int, input().strip().split()))
ara.sort()
ara.reverse()
ans = 0
num = 0
for i in range(k):
    ans += ara[i]
print(ans)
for i in range(k):
    if i == k-1:
        print(n-num)
    else:
        print(1, end=" ")
        num += 1
