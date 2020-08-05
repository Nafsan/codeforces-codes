t = int(input())
for i in range(t):
    n = int(input())
    ara = list(map(int, input().strip().split()))
    ara.sort()
    ara.reverse()
    flag = 0
    ans = 0
    for j in ara:
        if j == 2048:
            flag = 1
            break
        elif j < 2048:
            ans += j
        if ans == 2048:
            flag = 1
            break
        else:
            flag = 0
    if flag == 1:
        print("YES")
    else:
        print("NO")