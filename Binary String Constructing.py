import math

a, b, x = map(int, input().split())
s = ''
if a > b:
    if x % 2 == 0:
        s += '0'
        for i in range(int(x/2)):
            s += '10'
    else:
        for i in range(math.ceil(x/2)):
            s += '10'
    rem_zero = a - (math.ceil(x/2))
    for i in range(rem_zero):
        s += '0'
else:
    if x % 2 == 0:
        s += '1'
        for i in range(int(x/2)):
            s += '01'
    else:
        for i in range(math.ceil(x/2)):
            s += '01'
    rem_one = b - (math.ceil(x/2))
    for i in range(rem_one):
        s += '1'
print(s)