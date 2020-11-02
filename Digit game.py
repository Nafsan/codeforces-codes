for _ in range(int(input())):
    n = int(input())
    s = input()
    val = odd_odd = odd_even = even_odd = even_even = 0
    for i in range(1, n + 1):
        if int(s[i-1]) % 2 == 1 and i % 2 == 1:
            odd_odd += 1
        elif int(s[i-1]) % 2 == 1 and i % 2 == 0:
            even_odd += 1
        elif int(s[i-1]) % 2 == 0 and i % 2 == 1:
            odd_even += 1
        else:
            even_even += 1
    if odd_even >= even_odd:
        print(1)
    else:
        print(2)

