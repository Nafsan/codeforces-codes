import sys
n = int(raw_input())
s = str(raw_input())
increment = 1
i = 0
string = list()
while i<len(s):
    sys.stdout.write(s[i])
    i += increment
    increment +=1
print("")