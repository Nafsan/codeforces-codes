import sys
n = int(raw_input())
ara = map(int, raw_input().split())
freq = range(1,n+1)
x = sorted(zip(ara,freq))
for i in range(n/2):
    print(str(x[i][1])+" "+str(x[n-1-i][1]))