def row_col_to_alphabet(n):
    x = ''
    while n != 0:
        a = n % 26
        n //= 26
        x += alphabet[a-1]
    p = x[::-1]
    return p


alphabet = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
n = int(input())
for i in range(n):
    count = 0
    string = str(input())
    if string[0] == 'R' and string[1].isdigit() and 'C' in string:
        c_index = string.index('C')
        num2 = int(string[c_index + 1:])
        print(row_col_to_alphabet(num2) + string[1:c_index])
    else:
        s = ''
        for j in range(len(string)):
            if not string[j].isdigit():
                s += string[j]
        num_index = 0
        for j in range(len(string)):
            if string[j].isdigit():
                num_index = j
                break
        row = string[num_index:]
        s_len = len(s)

        ans = 0
        for j in range(s_len):
            ans += (alphabet.find(s[j]) + 1) * pow(26, s_len - 1)
            s_len -= 1
        print('R' + row + 'C' + str(ans))
