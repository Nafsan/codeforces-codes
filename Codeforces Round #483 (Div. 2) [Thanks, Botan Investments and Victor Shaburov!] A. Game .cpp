n = int(raw_input())
ara = list(map(int,raw_input().split()))
ara.sort()
if n%2==0:print(ara[(len(ara)/2)-1])
else: print(ara[len(ara)/2])