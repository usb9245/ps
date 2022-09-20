for i in range(int(input())) :
    st = input().split()

    print(st[0], '&', st[1], "are", end='')
    print('' if (sorted(st[0]) == sorted(st[1])) else ' NOT', 'anagrams.')
