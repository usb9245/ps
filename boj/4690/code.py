b = 2
c = 2
d = 2

for a in range(2, 101) :
    while (a ** 3) >= ((b ** 3) + (c ** 3) + (d ** 3)) :
        while (a ** 3) >= ((b ** 3) + (c ** 3) + (d ** 3)) :
            while (a ** 3) >= ((b ** 3) + (c ** 3) + (d ** 3)) :
                if (a ** 3) == ((b ** 3) + (c ** 3) + (d ** 3)) and (b < c < d) :
                    print("Cube = " + str(a) + ", Triple = (" + str(b) + ',' + str(c) + ',' + str(d) + ")")
                
                d += 1
            c += 1
            d = 2
        b += 1
        c = 2
    b = 2
