def check(s) :
    i = 0
    j = len(s) - 1

    while(i < j) :
        if s[i] != s[j] : return False
        i += 1
        j -= 1
            
    return True


for i in range(int(input())) :
    k = int(input())

    st = []

    for j in range(k) :
        st.append(input())

    ret = "0"

    for j in range(k) :
        for l in range(k) :
            if j != l and check(st[j] + st[l]) :
                ret = st[j] + st[l]

    print(ret)
