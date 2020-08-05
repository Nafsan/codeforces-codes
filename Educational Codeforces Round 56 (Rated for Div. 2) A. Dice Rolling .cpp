n = int(raw_input())
for i in range(n):
    m = int(input())
    if m%2 == 0:print(m/2)
    elif m == 1:print(0)
    else: print(1+((m-3)/2))