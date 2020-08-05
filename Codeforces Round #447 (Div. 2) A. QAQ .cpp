s = str(raw_input())
cnt = 0
for i in range(len(s)):
    if s[i] == 'Q':
        for j in range(i,len(s)):
            if s[j] == 'A':
                for k in range(j,len(s)):
                    if s[k] == 'Q':cnt +=1
print(cnt)