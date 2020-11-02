t = int(input())
for p in range(t):
    n = int(input())
    string = str(input())
    count = flag = miss = 0
    for i in range(n):
        if string[i] == '(':
            count += 1
        elif string[i] == ')':
            if count > 0:
                count -= 1
            else:
                miss += 1
    print(miss)
