import math
n = int(input())
ara = list(map(int, input().strip().split()))
ara.sort()
cost = 0
cost += ara[0]-1
value = ara[1]
for i in range(2, n):
    temp = pow(value,i)
    cost += abs(temp-ara[i])
print(cost)
