s = set()
n = int(input())
for i in range(n):
    string = raw_input()
    if string in s:
        print("YES")
    else: print("NO")
    s.add(string)