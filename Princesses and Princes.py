t = int(input())
for x in range(t):
    n = int(input())
    ara = []
    for i in range(n):
        li = list(map(int, input().strip().split()))
        k = li[0]
        ara.append(li)
        print(ara)
