import math
n,k = map(int,raw_input().split())
blue = n*8
green = n*5
red = n*2
ans = math.ceil(float(blue)/k)
ans += math.ceil(float(green)/k)
ans += math.ceil(float(red)/k)
print(int(ans))