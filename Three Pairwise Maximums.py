t = int(input())
for p in range(t):
    x, y, z = map(int, input().split())
    maxx = max(x, max(y, z))
    minn = min(x, min(y,z))
    count = 0
    if maxx == x:
        count += 1
    if maxx == y:
        count += 1
    if maxx == z:
        count += 1
    if count > 1:
        print("YES")
        print(str(maxx) + " " + str(minn)+" " + str(minn))
    else:
        print("NO")
