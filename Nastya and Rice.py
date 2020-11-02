t = int(input())
for i in range(t):
    n, a, b, c, d = map(int, input().split())
    in_range_st = (a-b)*n
    in_range_end = (a+b)*n
    out_range_st = (c-d)
    out_range_end = (c+d)
    if in_range_st>out_range_end or in_range_end<out_range_st:
        print("No")
    else:
        print("Yes")

