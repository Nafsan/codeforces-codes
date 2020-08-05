n = int(raw_input())
ara = list(map(int,raw_input().split()))
ara.sort()
ans = 0
for i in range(n):
    if i%2 == 0:
        if ara[i] != ara[i+1]:
            ans+= abs(ara[i]-ara[i+1])
print(ans)