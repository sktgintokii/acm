import sys

for line in sys.stdin:
    w = int(line)
    ans = 'NO'
    if (w % 2 == 0 and w != 2):
        ans = 'YES'

    print ans
    break
