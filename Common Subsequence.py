t = int(input())
for p in range(t):
    n, m = map(int, input().strip().split())
    ara1 = list(map(int, input().strip().split()))
    ara2 = list(map(int, input().strip().split()))
    flag = 0
    ans = 0
    for i in range(n):
        for j in range(m):
            if ara1[i] == ara2[j]:
                flag = 1
                ans = ara2[j]
                break
    if flag == 1:
        print("YES")
        print("1 " + str(ans))
    else:
        print("NO")

