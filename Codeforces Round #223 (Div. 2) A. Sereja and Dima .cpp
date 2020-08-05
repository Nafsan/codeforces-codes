import sys
n = int(raw_input())
ara = list(map(int, raw_input().split()))
sum1 = 0
sum2 = 0
for i in range(n):
    if i%2==0:
        if ara[0]>ara[len(ara)-1]:
            sum1+=ara[0]
            del ara[0]
        else:
            sum1+=ara[len(ara)-1]
            del ara[len(ara)-1]
    else:
        if ara[0]>ara[len(ara)-1]:
            sum2+=ara[0]
            del ara[0]
        else:
            sum2+=ara[len(ara)-1]
            del ara[len(ara)-1]

print(str(sum1)+" "+str(sum2))