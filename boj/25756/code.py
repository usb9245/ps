v = 0.0

n = int(input())
a = list(map(float, input().split()))

for i in range(n) :
    v = 1.0 - (1.0 - v) * (1.0 - (a[i] / 100))

    print(v * 100)
