for _ in range(int(input())):
    n = int(input())
    ara = list(map(int, input().strip().split()))
    dictionary = {}
    a = sorted(ara)
    element = ans = 1
    gang_number = []
    for i in range(n - 1):
        if a[i] != a[i + 1]:
            element += 1
            gang_number.append(ans)
            ans = 1
        else:
            ans += 1
    gang_number.append(ans)
    multiple = 1
    if len(gang_number) == 1:
        print("NO")
    else:
        for i in range(len(gang_number)):
            multiple *= gang_number[i]
            if multiple >= n - 1:
                print("YES")
                break
        if multiple < n-1:
            print("NO")
        print(gang_number)
        print(multiple)
        for i in range(n):
            dictionary[i + 1] = ara[i]
