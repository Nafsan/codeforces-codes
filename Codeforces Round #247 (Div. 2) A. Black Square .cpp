ara = list(map(int,raw_input().split()))
s = str(raw_input())
ans = 0
for i in range(len(s)):
    ans += ara[int(s[i])-1]
print(ans)