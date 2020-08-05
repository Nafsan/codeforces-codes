n =int(raw_input())
for i in range(n):
    ara = list(map(int,raw_input().split()))
    if ara[2]%2==0:
        ans = (ara[2]/2)*ara[0]-(ara[2]/2)*ara[1]
    else:
        ans = ((ara[2]+1)/2)*ara[0]-(ara[2]/2)*ara[1]
    print(ans)