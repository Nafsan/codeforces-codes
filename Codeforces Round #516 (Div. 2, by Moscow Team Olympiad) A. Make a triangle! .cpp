ara = list(map(int, raw_input().split()))
m = max(ara)
a = 0
if ara[0] ==m: a+= ara[1]+ara[2]
elif ara[1] ==m: a+=ara[0]+ara[2]
else: a+=ara[0]+ara[1]
require = 0
if m>=a:require = m+1-a
print(require)