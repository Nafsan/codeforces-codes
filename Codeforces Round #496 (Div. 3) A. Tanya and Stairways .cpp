import sys

n = int(raw_input())
ara = list(map(int,raw_input().split()))
cnt = 0
for i in range(len(ara)):
    if ara[i] == 1:
        cnt += 1
print(cnt)

for i in range(1,len(ara)):
    if ara[i] == 1:
        if i !=len(ara):
            sys.stdout.write(str(ara[i-1])+" ")
sys.stdout.write(str(ara[len(ara)-1]))
print("")