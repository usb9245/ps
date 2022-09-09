for i in range(int(input())) :
    s = input().split()

    for i in range(len(s)) :
        print(s[(i + 2) % len(s)], end=' ')
    
    print()
