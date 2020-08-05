import sys
n,m = map(int,raw_input().split())
ara1 = list(map(int,raw_input().split()))
ara2 = list(map(int,raw_input().split()))
for i in range(n):
    if ara1[i] in ara2:
        if i != n:sys.stdout.write(str(ara1[i])+" ")
        else: sys.stdout.write(str(ara1[i]))
print("")