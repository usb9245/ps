import re

ml = 0
ms = ""

while True :
    s = re.sub("((?![a-zA-Z-]).)", ' ', input()).split()

    if len(s) == 0 : continue

    for i in range(len(s)) :        
        if s[i] == "E-N-D" :
            print(ms.lower())
            exit(0)
        
        if len(s[i]) > ml :
            ml = len(s[i])
            ms = s[i]
