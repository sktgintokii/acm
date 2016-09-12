import sys
import math

for line in sys.stdin:
    n, m, a = map(float, line.split(' '))
    ans = math.ceil(n / a) * math.ceil(m / a)
    break

print int(ans)
