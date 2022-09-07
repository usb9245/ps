r, c, zr, zc = map(int, input().split())

str = []
for i in range(r) : 
    str.append(input())

for i in range(r) :
    for j in range(zr) :
        for chr in str[i] :
            print(chr * zc, end='')
        print()
