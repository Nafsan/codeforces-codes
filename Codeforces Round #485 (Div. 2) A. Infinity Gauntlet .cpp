n = int(raw_input())

d = dict()
d["purple"] = 0
d["green"] = 1
d["blue"] = 2
d["orange"] = 3
d["red"] = 4
d["yellow"] = 5
l = ["Power", "Time", "Space", "Soul", "Reality", "Mind"]
flag = [0,0,0,0,0,0]
for i in range(n):
    s = raw_input()
    flag[d[s]] = 1
cnt = 0
list2 = list()
for i in range(len(flag)):
    if flag[i] == 0:
        list2.append(l[i])
print(len(list2))
for i in range(len(list2)):
    print(list2[i])