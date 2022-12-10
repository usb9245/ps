n = int(input())

while True:
    if n % sum(list(map(int, str(n)))) == 0 :
        print(n)
        exit(0)

    n += 1
