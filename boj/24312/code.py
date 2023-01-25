a, b, c, d = map(int, input().split())
print( min( abs((a + b) - (c + d)), abs((a + c) - (b + d)), abs((a + d) - (b + c)), abs(a - (b + c + d)), abs(b - (a + c + d)), abs(c - (a + b + d)), abs(d - (a + b + c)) ) )
