t = int(input())
for i in range(t):
    a, b, x, y, n = map(int, input().split())
    a_x = a - x
    b_y = b - y
    ara = list()
    
    ara.sort()
    print(ara[0])
