for _ in range(int(input())):
    x = int(input())
    st_x = str(x)
    value = int(st_x[0])
    ans = 10*(value-1)
    str_len = len(st_x)
    for i in range(1, str_len+1):
        ans += i
    print(ans)
