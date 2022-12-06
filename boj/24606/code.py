import math

a = input()
b = input()

s = 4
for i in range(4) :
    if a[i] == b[i] : s -= 1

print( 2 ** s )
