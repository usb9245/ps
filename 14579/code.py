a, b = map(int, input().split())

s = 1
for i in range(a, b + 1) :
    s = s * (i * (i + 1) // 2) % 14579

print(s)
