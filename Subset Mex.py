for _ in range(int(input())):
    n = int(input())
    ara = list(map(int, input().strip().split()))

    ara.sort()

    a = set()
    b = set()

    a.add(ara[0])

    for i in range(1, n):
        if ara[i] == ara[i - 1]:
            b.add(ara[i])
        else:
            a.add(ara[i])

    ans = count = flag = 0

    for i in a:
        if i == count:
            count += 1
            flag = 1
        else:
            ans += count
            flag = 0
            break

    if flag == 1:
        ans += count

    count = flag = 0

    for i in b:
        if i == count:
            count += 1
            flag = 1
        else:
            ans += count
            flag = 0
            break

    if flag == 1:
        ans += count

    print(ans)

