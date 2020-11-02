n = int(input())
for i in range(n):
    string = str(input())
    ara = [0]
    len_string = len(string)
    flag = 0
    cnt = 0
    index = 0
    for j in range(index, len_string):
        if flag == 1:
            if string[j] == '1' and j != len_string - 1:
                cnt += 1
                flag = 1
            elif string[j] == '1' and j == len_string - 1:
                cnt += 1
                ara.append(cnt)
            else:
                ara.append(cnt)
                cnt = 0
                flag = 0
        else:
            if string[j] == '1' and j != len_string - 1:
                flag = 1
                cnt += 1
            elif string[j] == '1' and j == len_string - 1:
                ara.append(1)
    ara.sort()
    ara.reverse()
    ans = 0
    # print(ara)
    # print(len(ara))

    for j in range(len(ara)):
        if j % 2 == 0:
            ans += ara[j]
    print(ans)
