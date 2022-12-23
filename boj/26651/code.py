x = int(input())

if(x <= 1) :
    print(('A' * x) + "BCDEFGHIJKLMNOPQRSTUVWXYZ")
    exit(0)

a = 2
z = 1
bc = 0
m = x + 2
for i in range(int(x ** 0.5), 0, -1) :
    if ((i + (x / i) + (x % i * 26)) < m) :
        a = i;
        z = (x // i);
        bc = (x % i);
        m = a + z + (bc * 26);

print(("ABCDEFGHIJKLMNOPQRSTUVWXYZ" * bc) + ('A' * a) + "BCDEFGHIJKLMNOPQRSTUVWXY" + ((x // a) * 'Z'))
