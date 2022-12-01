n, k = map(int, input().split())

rate = 0.0
for i in range(k) :
    rate += float(input())

print( (rate + -3.0 * (n - k)) / n, (rate + 3.0 * (n - k)) / n )

