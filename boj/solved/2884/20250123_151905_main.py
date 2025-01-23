import sys

h, m = map(int, sys.stdin.readline().strip().split())

m = m - 45
if m < 0:
    h -= 1
    m += 60

if h < 0:
    h += 24

print(h, m)

