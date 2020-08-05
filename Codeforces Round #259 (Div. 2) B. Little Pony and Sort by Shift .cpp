n = int(input())
ara = list(map(int, input().strip().split()))
ara2 = ara
ara = sorted(ara)
if ara2 == ara:
    print('0')

else:
    pos = 0
    count = 0
    for i in range(n):
        if i != n - 1 and ara2[i] > ara2[i + 1]:
            count += 1
            pos = i
        elif i == n-1 and ara2[i] > ara2[0]:
            count += 1
            pos = i
    if count > 1:
        print(-1)
    else:
        print(n - 1 - pos)