a = int(input())
b = input()

print(a, b, sep='\n')

for i in range(len(b) - 1, -1, -1) :
    print(a * int(b[i]))

print(a * int(b))
