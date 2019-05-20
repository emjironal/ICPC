import math
t = int(input())
for i in range(t):
    n = int(input())
    n /= 10
    n %= 10
    result = 10 * (math.pow(9, (n-1)))
    result = result % 1000000007
    print(result)
