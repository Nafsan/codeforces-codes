for _ in range(int(input())):
    n = int(input())
    ara = list(map(int, input().strip().split()))
    start = end = count = 0
    if ara.count(1) == 1:
        print(0)
    else:
        for i in range(n):
            if ara[i] == 1:
                start = i
                break
        for i in range(n):
            if ara[n-i-1] == 1:
                end = n-i
                break
        for i in range(start, end):
            if ara[i] == 0:
                count += 1
        print(count)
