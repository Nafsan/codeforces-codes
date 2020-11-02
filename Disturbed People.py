n = int(input())
ara = list(map(int, input().strip().split()))
deg = [0] * len(ara)
zero = [0] * len(ara)
if ara[0] == 1:
    deg[0] += 1
if ara[len(ara) - 1] == 1:
    deg[len(ara) - 1] = 1

for i in range(1, len(ara) - 1):
    if ara[i] == 1:
        deg[i] += 1
    if ara[i] == 1 and ara[i + 1] == 0:
        deg[i] += 1
    if ara[i] == 1 and ara[i - 1] == 0:
        deg[i] += 1
    if ara[i] == 0 and ara[i - 1] == 1 and ara[i + 1] == 1:
        zero[i] += 1
cnt = 0
# print(deg)
for i in range(len(ara)):
    if zero[i] == 1:
        if deg[i - 1] >= deg[i + 1]:
            deg[i - 1] = 0
            deg[i + 1] = 0
            if i + 2 < len(ara):
                zero[i + 2] = 0
            if i - 2 >= 0:
                zero[i - 2] = 0
            cnt += 1
            # print("Index : " + str(i-1))
            continue
        else:
            deg[i - 1] = 0
            deg[i + 1] = 0
            zero[i + 2] = 0
            zero[i - 2] = 0
            cnt += 1
            # print("Index : " + str(i+1))
            continue
print(cnt)
