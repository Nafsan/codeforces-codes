for _ in range(int(input())):
    n, m = map(int, input().split())
    ara = list(map(int, input().strip().split()))
    p = list(map(int, input().strip().split()))
    for i in range(m):
        p[i] -= 1
    p.sort()
    ara2 = sorted(ara)
    ara2.sort()
    for j in range(n-1):
        for i in range(n-1):
            if ara[i] > ara[i+1] and i in p:
                ara[i], ara[i+1] = ara[i+1], ara[i]
    if ara == ara2:
        print("YES")
    else:
        print("NO")



