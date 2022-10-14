a, b, n = map(int, input().split())

c = 0

for i in range(a, b + 1) :
    c += str(i).count(str(n))

print(c)
