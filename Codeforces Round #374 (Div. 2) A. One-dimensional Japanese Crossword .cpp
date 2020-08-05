import sys
n = int(input())
s = str(raw_input())
cnt = 0
koyta = 1
s = s+"W"
ls = list()
for i in range(len(s)):
    if s[i] == 'B' and s[i+1] != 'B':
        cnt += 1
        ls.append(koyta)
        koyta = 1
    elif s[i]=='B': koyta += 1
print(len(ls))
for i in range(len(ls)):
    if i != len(ls):sys.stdout.write(str(ls[i])+" ")
    else: sys.stdout.write(ls[i])
print('')