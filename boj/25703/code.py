print("int a;\nint *ptr = &a;")

for i in range(2, int(input()) + 1) :
    print("int " + ('*' * i) + "ptr" + str(i) + " = &ptr" + (str(i - 1) if i > 2 else '') + ";")
