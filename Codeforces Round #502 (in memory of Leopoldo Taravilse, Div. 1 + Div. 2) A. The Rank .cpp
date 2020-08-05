n = int(raw_input())
ans = 0
place = 1
ara1 = list(map(int,raw_input().split()))
s = sum(ara1)
for i in range(n-1):
    ara = list(map(int,raw_input().split()))
    if sum(ara)>s:
        place+=1
print(place)