t = int(input())
for i in range(t):
    n = int(input())
    flag = count = 0
    while 1:
        if n == 1:
            flag = 1
            break
        elif n % 3 != 0:
            flag = 0
            break
        elif n % 6 == 0:
            n /= 6
        elif n % 6 != 0 and n % 3 == 0:
            n *= 2
        count += 1

    if flag == 0:
        print(-1)
    else:
        print(count)
