n = int(input())
if n%10 == 0:
    print(n)
else:
    if n%10 > 5:
        print(n+(10-n%10))
    else: print(n-(n%10))