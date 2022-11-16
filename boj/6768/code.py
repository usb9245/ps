from math import *

j = int(input())

print((factorial(j - 1) // (factorial(j - 4) * factorial(3))) if j >= 4 else 0)
