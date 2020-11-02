from collections import Counter

t = int(input())
for p in range(t):
    n = int(input())
    string = str(input())
    count = Counter(string)
    num_a = count['a']
    flag = ans = 0
    if n == 1:
        if num_a == 1:
            ans = 0
        else:
            ans = 0
