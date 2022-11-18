a = input()

b = input().split()

for c in b :
    a = a.replace(c, chr( ord(c) - ord('A') + ord('a') ))

print(a)

