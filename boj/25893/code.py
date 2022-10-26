for i in range(int(input())) :
    x = list(map(int, input().split())) 

    print(x[0], x[1], x[2])

    x = sorted(x)

    if x[2] >= 10 :
        if x[1] >= 10 :
            if x[0] >= 10 :
                print("triple-double")
            else: 
                print("double-double")
        else :
            print("double")
    else :
        print("zilch")

    print()
