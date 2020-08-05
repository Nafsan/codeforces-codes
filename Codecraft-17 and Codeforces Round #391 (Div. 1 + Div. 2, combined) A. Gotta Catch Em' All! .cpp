string = str(input())
B = 0
u = 0
l1 = 0
b = 0
a = 0
s = 0
r = 0
for i in string:
    if i == 'B':
        B += 1
    elif i == 'u':
        u += 1
    elif i == 'l':
        l1 += 1
    elif i == 'b':
        b += 1
    elif i == 'a':
        a += 1
    elif i == 's':
        s += 1
    elif i == 'r':
        r += 1
a /= 2
a = int(a)
u /= 2
u = int(u)
ara = [B, a, l1, b, s, u, r]
ara.sort()
print(ara[0])
 