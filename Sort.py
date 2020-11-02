a = input()
b = input()
a_num = a_str = b_num = b_str = ""
for i in range(len(a)):
    if '0' <= a[i] <= '9':
        a_num += a[i]
    else:
        a_str += a[i]
for i in range(len(b)):
    if '0' <= b[i] <= '9':
        b_num += b[i]
    else:
        b_str += b[i]
if a_str > b_str:
    print(">")
elif a_str < b_str:
    print("<")
elif len(a_num) == len(b_num):
    if a_num > b_num:
        print(">")
    elif a_num < b_num:
        print("<")
    else:
        print("=")
elif len(a_num) < len(b_num):
    print("<")
else:
    print(">")

