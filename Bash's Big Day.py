import math


n = int(input())
if n == 1:
    print("1")
else:
    prime = [1] * n
    sq = int(math.sqrt(n))
    prime[0] = 0
    prime[1] = 0
    for i in range(2, sq):
        if prime[i] == 1:
            for j in range(i * i, n, i):
                prime[j] = 0
    prime_list = []
    for i in range(n):
        if prime[i] == 1:
            prime_list.append(i)
    # print(prime_list)

    ara = list(map(int, input().strip().split()))
    cnt = 0
    cnt1 = 0

    length = len(prime_list)
    for j in range(length):
        cnt = 0
        for i in ara:
            if i % prime_list[j] == 0:
                cnt += 1

        if cnt > cnt1:
            cnt1 = cnt
        if cnt == n:
            break
    print(cnt1)
