n, k = map(int, input().split())
a = list(map(int, input().strip().split()))
rem = 0
total = 0
index = 0
for i in a:
    index += 1
    if rem + i <= 8:
        total += rem + i
        rem = 0
    else:
        rem += i - 8
        total += 8
    if total >= k:
        break
if total >= k:
    print(index)
    # print("Rem: " + str(rem))
    # print("Total: " + str(total))
else:
    print("-1")
