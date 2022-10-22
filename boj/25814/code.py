n = input().split()

a = len(n[0]) * sum(int(x) for x in n[0])
b = len(n[1]) * sum(int(x) for x in n[1])

print(0 if a == b else (1 if a > b else 2))
