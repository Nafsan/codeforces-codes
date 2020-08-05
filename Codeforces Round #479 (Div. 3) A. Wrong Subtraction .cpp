n , k = map(int, raw_input().split())
while k != 0:
    if n % 10 == 0:
        n /= 10
    else:
        n = n-1
    k = k-1
print(n)