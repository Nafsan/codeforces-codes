t = int(input())
for p in range(t):
    n = int(input())
    ara = list(map(int, input().strip().split()))
    ara.sort()
    flag = 0
    for i in range(n-1):
        if ara[i+1] - ara[i] > 1:
            flag = 1
            break
        else:
            flag = 0
    if flag == 1:
        print("NO")
    else:
        print("YES")
