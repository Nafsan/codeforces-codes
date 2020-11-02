square = []
for i in range(1,49):
    j = 49/i
    sq = i*i+j*j
    square.append(sq)
    print('x = '+ str(i)+'; y = '+str(j)+ ' x^2+y^2 = '+ str(sq))

square.sort()
square.reverse()
print(square[0])
