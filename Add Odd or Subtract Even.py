for _ in range(int(input())):
    a, b = map(int, input().split())
    if b > a:
        if (b - a) % 2 == 1:
            print(1)
        else:
            print(2)
    elif b < a:
        if (b - a) % 2 == 0:
            print(1)
        else:
            print(2)
    else:
        print(0)
