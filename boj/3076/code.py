r, c = map(int, input().split())
a, b = map(int, input().split())

for i in range(r) :
    st = ""
    
    for j in ((".X" if i % 2 else "X.") * c)[:c] :
        st += (j * b)

    print((st + '\n') * a, end='')
