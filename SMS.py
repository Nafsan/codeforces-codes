for j in range(int(input())):
    string = input()
    demo1 = "adgjmptw "
    demo2 = "behknqux"
    demo3 = "cfilorvy"
    demo4 = "sz"
    ans = 0
    for i in range(len(string)):
        if string[i] in demo1:
            ans += 1
        elif string[i] in demo2:
            ans += 2
        elif string[i] in demo3:
            ans += 3
        else:
            ans += 4
    print("Case #" + str(j+1), end=": ")
    print(ans)
