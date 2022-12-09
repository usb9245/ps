n = int(input())

mname = ""
mg = 0
ms = 0
mb = 0

for i in range(n) :
    t = input().split()
    g = int(t[0])
    s = int(t[1])
    b = int(t[2])
    nname = ' '.join(t[3:])

    if (mg < g) or (mg == g and ms < s) or (mg == g and ms == s and mb < b) :
        mg = g
        ms = s
        mb = b
        mname = nname

print(mname)
