s = input()

u = s.find('U')
f = s[::-1].find('F')

print(('-' * u) + 'U' + ('C' * (len(s) - f - u - 2)) + 'F' + ('-' * f))
