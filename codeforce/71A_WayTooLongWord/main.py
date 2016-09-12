import sys

max_count = 10

sys.stdin.readline()
for line in sys.stdin:
    line = line.strip()
    str_len = len(line)
    if str_len > max_count:
        print line[0] + str(str_len - 2) + line[-1]
    else:
        print line
