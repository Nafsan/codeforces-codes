t = int(input())
for p in range(t):
    n = int(input())
    ara = list(map(int, input().strip().split()))
    ones = flag = 0
    for i in ara:
        if i == 1 and flag == 0:
            ones += 1
        else:
            flag = 1
    if flag == 1:
        if ones % 2 == 0:
            print("First")
        else:
            print("Second")
    else:
        if ones % 2 == 0:
            print("Second")
        else:
            print("First")
