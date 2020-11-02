three = five = seven = 0


def solve(n):
    if n == 0:
        print(str(three)+' '+str(five)+' '+str(seven))


for _ in range(int(input())):
    n = int(input())
    solve(n)
