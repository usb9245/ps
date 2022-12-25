a, b = map(int, input().split())
b = min(b, 9989899)

e = [True for i in range(b + 1)]

s = ""
for i in range(2, b + 1) :
    if e[i] == True :
        if i >= a :
            s = str(i)
            if s == s[::-1] :
                print(i)

        for j in range(i + i, b + 1, i) :
            e[j] = False

print(-1)
