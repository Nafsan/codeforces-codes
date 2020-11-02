for _ in range(int(input())):
    n = int(input())
    ara = list(map(int, input().strip().split()))
    maxx = max(ara)
    if ara.count(maxx) == n:
        print(-1)
    elif ara.count(maxx) == 1:
        for i in range(n):
            if ara[i] == maxx:
                print(i + 1)
    else:
        if ara[0] == maxx and ara[1] != maxx:
            print(1)
        else:
            for i in range(1, n - 1):
                if ara[i] == maxx and (ara[i + 1] != maxx or ara[i - 1] != maxx):
                    print(i + 1)
                    break
