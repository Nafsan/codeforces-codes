n = int(input())
string = str(input())
count = [0] * 26
cnt = 0
alphabet = "abcdefghijklmnopqrstuvwxyz"
for i in range(n):
    count[alphabet.find(string[i])] += 1
for i in count:
    if i > 1:
        cnt += i-1
if n>26:
    print("-1")
else:
    print(cnt)
 