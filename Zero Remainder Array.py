t = int(input())
for p in range(t):
    n, k = map(int, input().split())
    ara = list(map(int, input().strip().split()))
    diff = flag = []
    x = count = 0

    for i in range(n):
        diff.append(ara[i] % k)
    diff.sort()
    diff.reverse()

    #print(*diff, sep=" ")

    for i in range(n):
        if diff[i] == 0:
            count += 1
    if count == n:
        print(0)
    else:
        x += 1
        for i in range(n):
            if diff[i] != 0:
                if (diff[i] + x) % k == 0:
                    x += 1
                    diff[i] = 0
                    #print(x)
                else:
                    diff[i]+=x
                    x += k - diff[i]
                    #print(x)
        print(x)
