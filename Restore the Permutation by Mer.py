t = int(input())
for p in range(t):
    n = int(input())
    ara = list(map(int, input().strip().split()))
    freq = [0] * (2 * n)
    ans = list()
    for i in range(2 * n):
        if freq[ara[i]] == 0:
            ans.append(ara[i])
        freq[ara[i]] += 1
    print(*ans, sep=" ")

