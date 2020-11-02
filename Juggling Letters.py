from collections import Counter

t = int(input())
for x in range(t):
    n = int(input())
    string = ""
    for i in range(n):
        s = str(input())
        string += s
    flag = 0
    length = len(string)
    count = [0] * 26
    for i in range(length):
        count[ord(string[i]) - ord('a')] += 1
    count.sort()
    for i in range(26):
        if count[i] % n != 0:
            flag = 0
            break
        else:
            flag = 1
    if flag == 0:
        print("NO")
    else:
        print("YES")
